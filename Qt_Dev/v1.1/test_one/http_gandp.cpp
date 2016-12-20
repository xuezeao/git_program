#include "http_gandp.h"
#include "global_Vailable.h"
#include "QInputMethod"

http_GAndP::http_GAndP(QObject *parent) :
    QObject(parent)
{
    accessManager = new QNetworkAccessManager;//用于NETWORK

    msgBox = new QMessageBox;//弹窗

    user=&USER;

    connect(accessManager,SIGNAL(finished(QNetworkReply*)),this,SLOT(finished(QNetworkReply*)));//当QNetworkAccessManager使用时会自动发送findshed信号

}

void http_GAndP::getHttp()
{
    QNetworkRequest *request=new QNetworkRequest();
    //request->setUrl(QUrl("http://121.41.78.9:3000/arm/getTest"));
//    request->setUrl(QUrl(QString("http://localhost:3000/arm/initialInfo/%1").arg(CABINETNO)));
    request->setUrl(QUrl(QString("http://121.43.159.215:3000/arm/initialInfo/%1").arg(CABINETNO)));
    accessManager->get(*request);//通过发送数据，返回值保存在reply指针里.

    Http_ModelChoice=0;
}


void http_GAndP::postHttp(int postName_NO,QString postStr)
{
    QString address;

    switch (postName_NO) {
    case 0 :{
        address="postTest";//测试地址
        break;
    }
    case 1 :{
        address="availableAgentiaList";//获取再位试剂列表
        postStr=QString("{\"cabinetNo\":\"%1\"}").arg(CABINETNO);
        Http_ModelChoice=1;
        break;
    }
    case 2 :{
        address="agentiaTypeList";//获取试剂类型列表
        Http_ModelChoice=2;
        break;
    }
    case 3 :{
        address="occupiedAgentiaList";//获取待归还试剂
        postStr=QString("{\"userId\":%1,\"cabinetNo\":\"%2\"}").arg(user->user_Id).arg(CABINETNO);
        Http_ModelChoice=3;
        break;
    }
    case 5 :{
        address = "allocPosition";//获取地址信息
        Http_ModelChoice = 5;
        break;
    }
    case 6 :{
        address = "putIn";//入柜完成
        Http_ModelChoice = 6;
        break;
    }
    case 7 :{
        address = "takeOut";//取 完成
        Http_ModelChoice = 7;
        break;
    }
    case 8 :{
        address = "giveBack";//还 完成
        Http_ModelChoice = 8;
        break;
    }
    case 9 :{
        address = "replace";//替换 完成
        Http_ModelChoice = 9;
        break;
    }
    case 10 :{
        address = "scrap";//报废 完成
        Http_ModelChoice = 10;
        break;
    }

    case 11 :{
        address = "login";//登入
        Http_ModelChoice = 11;
        break;
    }
    default:
        break;
    }



//测试用户
//    QString postStr = "{\"username\":\"james\",\"password\":\"attack\"}";
//    request->setUrl(QUrl("http://121.41.78.9:3000/arm/postTest"));


    QNetworkRequest *request=new QNetworkRequest();
//    121.43.159.215:3000/arm/
//    request->setUrl(QUrl(QString("http://localhost:3000/arm/%1").arg(address)));
    request->setUrl(QUrl(QString("http://121.43.159.215:3000/arm/%1").arg(address)));
    request->setHeader(QNetworkRequest::ContentTypeHeader,"application/json");

    QByteArray postData =postStr.toUtf8();//翻译

    qDebug()<<QObject::tr(postData);

    accessManager->post(*request, postData);
}


void http_GAndP::finished(QNetworkReply *reply)
{
    if(reply->error() == QNetworkReply::NoError)
    {
        QTextCodec *codec = QTextCodec::codecForName("utf-8");
        QString all = codec->toUnicode(reply->readAll());
        QJsonDocument all_info=QJsonDocument::fromJson(all.toUtf8());

        agentiaInfoGet(all_info,Http_ModelChoice);

        qDebug()<<all<<"---------finished";


    }
    else
    {
//        msgBox->setText(reply->errorString());
        qDebug()<<"http errors here finished";
//        msgBox->exec();
        emitLostMessage(Http_ModelChoice);
        emit sendFalse();
    }

    reply->deleteLater();//释放reply
}

void http_GAndP::emitLostMessage(int t)
//5: 入柜 6：入柜完成 7：取完成 8:还
{
    if(t == 7)
    {
        emit sendInfo_To_sheetPage(1);//request save
    }

}

bool http_GAndP::agentiaInfoGet(QJsonDocument str, int t)
//5: 入柜 6：入柜完成 7：取完成 8:还完成  9:替换完成 10：报废完成 11：登入
{
    QString stash_H[20];//临时存储解析的数据
    int stash_H_Int[20];
    QSqlQuery query;
    QJsonObject analyze_Set=str.object();
    int analyze_InfoAmount(0);//记录信息总数
    /*****存储信息******/
    int H_positionNo;
    int H_drawerNO;
    int H_positionId;
    bool H_success;

//    qDebug()<<t;

    if(t == 0)//存储柜子信息和抽屉信息
    {
        QJsonValue i1=analyze_Set["cabinetName"].toString();
        stash_H[0]=i1.toString();

        QJsonValue i2=analyze_Set["groupId"].toInt();
        stash_H_Int[1]= i2.toInt();

        QJsonValue i3=analyze_Set["groupName"].toString();
        stash_H[2]=i3.toString();

        QJsonValue i4=analyze_Set["drawerAmount"].toInt();
        analyze_InfoAmount=i4.toInt();
        stash_H_Int[3]= i4.toInt();


        query.prepare("insert into T_CabinetInfo (cabinetName,groupId,groupName,drawerAmount) values (?,?,?,?)");
        query.addBindValue(stash_H[0]);
        query.addBindValue(stash_H_Int[1]);
        query.addBindValue(stash_H[2]);
        query.addBindValue(stash_H_Int[3]);
        query.exec();


        QJsonArray i5=analyze_Set["drawerList"].toArray();

        for(int i=0;i<analyze_InfoAmount;i++)
        {
            QJsonObject i6 = i5[i].toObject();

            QJsonValue i7 = i6["drawerNo"].toInt();
            stash_H_Int[4]= i7.toInt();

            QJsonValue i8=i6["drawerName"].toString();
            stash_H[5]=i8.toString();

            QJsonValue i9=i6["drawerSize"].toString();
            stash_H[6]=i9.toString();

            QJsonValue i10=i6["positionAmount"].toInt();
            stash_H_Int[7]=i10.toInt();

            QJsonValue i11=i6["attribte"].toInt();
            stash_H_Int[8]=i11.toInt();
            qDebug()<<i7<<"-------"<<i8<<"----"<<i9<<"-------"<<i10<<"----------"<<i11;

            query.prepare("insert into T_DrawerList (drawerNo,drawerName,drawerSize,positionAmount,attribute) values (?,?,?,?,?)");
            query.addBindValue(stash_H_Int[4]);
            query.addBindValue(stash_H[5]);
            query.addBindValue(stash_H[6]);
            query.addBindValue(stash_H_Int[7]);
            query.addBindValue(stash_H_Int[8]);
            query.exec();

        }

    }

    else if(t == 5)//入柜申请分配位置
    {
        QJsonValue i1 = analyze_Set["success"].toBool();
        H_success = i1.toBool();

        if( H_success )
        {
            QJsonValue i2 = analyze_Set["positionNo"].toInt();
            H_positionNo = i2.toInt();

            QJsonValue i3=analyze_Set["drawerNo"].toInt();
            H_drawerNO = i3.toInt();

            QJsonValue i4=analyze_Set["positionId"].toInt();
            H_positionId = i4.toInt();
            user->positionId_allocPosition=H_positionId;

            emit sendInfo_To_Operate(H_drawerNO, H_positionNo,H_positionId);//将值传送到执行弹窗口
            emit sendError_To_Operate(1);//,"位置申请成功"
            qDebug()<<"OK+++weizhi";
        }
        else{

//            QJsonValue qError = analyze_Set["errorMessage"].toString();
            emit sendError_To_Operate(0);//,"没有空闲位置"
            qDebug()<<"error -- rugui";
        }

    }

    else if(t == 6)//入柜完成
    {
        QJsonValue i1 = analyze_Set["success"].toBool();
        H_success = i1.toBool();

        if( H_success )
        {
            qDebug()<<"入柜完成";
            emit  sendInfo_To_return_PutIn(0);//0:OK 1:lose

        }else{

            emit sendInfo_To_return_PutIn(1);//0:OK 1:lose
        }

    }

    else if(t == 7)//取 完成
    {
        QJsonValue i1 = analyze_Set["success"].toBool();
        H_success = i1.toBool();

        if( H_success )
        {
           emit sendInfo_To_sheetPage(0);//0:OK 1:lose

        }else{

           emit sendInfo_To_sheetPage(1);//request save

        }
    }

    else if(t == 8)//还 完成
    {
        QJsonValue i1 = analyze_Set["success"].toBool();
        H_success = i1.toBool();

        if( H_success )
        {
           emit sendInfo_To_return_PutIn(0);//0:OK 1:lose

        }else{

           emit sendInfo_To_return_PutIn(1);//request save

        }
    }

    else if(t == 9)//替换
    {
        QJsonValue i1 = analyze_Set["success"].toBool();
        H_success = i1.toBool();

        if( H_success )
        {
            emit sendInfo_To_return_PutIn(0);//0：ok
        }
        else {
            emit sendInfo_To_return_PutIn(1);//reques
        }
    }
    else if(t == 10 )//报废
    {
        QJsonValue i1 = analyze_Set["success"].toBool();
        H_success = i1.toBool();

        if( H_success )
        {
            emit sendInfo_To_return_PutIn(0);//0：ok
        }
        else{
            emit sendInfo_To_return_PutIn(1);//request
        }

    }
    else if(t == 11)//登入
    {
        QJsonValue i1 = analyze_Set["success"].toBool();
        H_success = i1.toBool();

        if( H_success )
        {
            QJsonValue i2 = analyze_Set["userId"].toInt();
            user->user_Id = i2.toInt();

            QJsonValue i3 = analyze_Set["role"].toInt();
            user->user_Role = i3.toInt();


            query.exec("DELETE FROM T_UserInfo");//清楚数据表

            query.prepare("insert into T_UserInfo (userId,role) values (?,?)");
            query.addBindValue(user->user_Id);
            query.addBindValue(user->user_Role);
            query.exec();
            emit sendInfo_To_Enter(0,user->user_Id,user->user_Role);//0:OK 1:lose

        }else{

            emit sendInfo_To_Enter(1,0,0);//request save

        }



    }



/*    if(t==1)//存储所有在柜药剂信息
    {
        QJsonValue i1=analyze_Set["success"].toBool();

        if(i1.toBool())
        {
            QJsonValue i3=analyze_Set["amount"].toInt();
            analyze_InfoAmount=i3.toInt();

            QJsonArray i5=analyze_Set["agentiaList"].toArray();

            for(int i=0;i<analyze_InfoAmount;++i)
            {
                 QJsonObject i6=i5[i].toObject();

                 QJsonValue i7=i6["agentiaId"].toInt();
                 stash_H[0]=QString::number(i7.toInt());

                 QJsonValue i8=i6["bottleCapacity"].toString();
                 stash_H[1]=i8.toString();

                 QJsonValue i9=i6["dose"].toString();
                 stash_H[2]=i9.toString();


                 QJsonValue i10=i6["expiryDate"].toString();
                 stash_H[3]=i10.toString();

                 QJsonValue i11=i6["drawerNo"].toInt();
                 stash_H[4]=QString::number(i11.toInt());

                 QJsonValue i12=i6["drawerName"].toString();
                 stash_H[5]=i12.toString();

                 QJsonValue i13=i6["positionNo"].toInt();
                 stash_H[6]=QString::number(i13.toInt());

                 QJsonValue i14=i6["positionName"].toString();
                 stash_H[7]=i14.toString();

                 QJsonValue i15=i6["positionId"].toInt();
                 stash_H[8]=QString::number(i15.toInt());

                 QJsonValue i16=i6["attribute"].toInt();
                 stash_H[9]=QString::number(i16.toInt());

                 query.prepare("insert into T_AgentiaInBox (agentiaId,bottleCapacity,dose,expiryDate,drawerNo,drawerName,positionNo,positionName,positionId,attribute) values (?,?,?,?,?,?,?,?,?,?)");
                 query.addBindValue(stash_H[0]);
                 query.addBindValue(stash_H[1]);
                 query.addBindValue(stash_H[2]);
                 query.addBindValue(stash_H[3]);
                 query.addBindValue(stash_H[4]);
                 query.addBindValue(stash_H[5]);
                 query.addBindValue(stash_H[6]);
                 query.addBindValue(stash_H[7]);
                 query.addBindValue(stash_H[8]);
                 query.addBindValue(stash_H[9]);
                 query.exec();
            }
    //            query.exec(QString("select * from T_AgentiaInBox ORDER BY agentiaId ASC"));


        }
        else
        {
            return FALSE;
        }

    }
    if(t==2){
        ;
    }
    if(t==3)
    {
        QJsonValue i1=analyze_Set["success"].toBool();

//        QJsonValue i2=analyze_Set["errorMessage"].toString();
//        analyze_ErrorInfo=i2.toString();

        if(i1.toBool())
        {
           qDebug()<<"occupiedAgentiaList  OK";
           QJsonValue i3=analyze_Set["amount"].toInt();
           analyze_InfoAmount=i3.toInt();
           qDebug()<<analyze_InfoAmount;
           QJsonArray i5=analyze_Set["agentiaList"].toArray();
           for(int i=0;i<analyze_InfoAmount;++i)
           {
                QJsonObject i6=i5[i].toObject();
                QJsonValue i7=i6["agentiaId"].toInt();
                stash_H[0]=QString::number(i7.toInt());

                QJsonValue i8=i6["bottleCapacity"].toString();
                stash_H[1]=i8.toString();

                QJsonValue i9=i6["dose"].toString();
                stash_H[2]=i9.toString();

                QJsonValue i10=i6["expiryDate"].toString();
                stash_H[3]=i10.toString();

                QJsonValue i11=i6["drawerNo"].toInt();
                stash_H[4]=QString::number(i11.toInt());

                QJsonValue i12=i6["drawerName"].toString();
                stash_H[5]=i12.toString();

                QJsonValue i13=i6["positionNo"].toInt();
                stash_H[6]=QString::number(i13.toInt());

                QJsonValue i14=i6["positionName"].toString();
                stash_H[7]=i14.toString();

                QJsonValue i15=i6["positionId"].toInt();
                stash_H[8]=QString::number(i15.toInt());

                QJsonValue i16=i6["attribute"].toInt();
                stash_H[9]=QString::number(i16.toInt());

                query.prepare("insert into T_Task_return (agentiaId,bottleCapacity,dose,expiryDate,drawerNo,drawerName,positionNo,positionName,positionId,attribute) values (?,?,?,?,?,?,?,?,?,?)");
                query.addBindValue(stash_H[0]);
                query.addBindValue(stash_H[1]);
                query.addBindValue(stash_H[2]);
                query.addBindValue(stash_H[3]);
                query.addBindValue(stash_H[4]);
                query.addBindValue(stash_H[5]);
                query.addBindValue(stash_H[6]);
                query.addBindValue(stash_H[7]);
                query.addBindValue(stash_H[8]);
                query.addBindValue(stash_H[9]);
                query.exec();
                qDebug()<<"3  -----OK";
               }
//              query.exec(QString("select * from T_Task_return ORDER BY agentiaId DESC"));
          }
       }*/
    return true;
}


void http_GAndP::jsonForSend(int model_json, QString T_tableName, int T_tableNo)
//  5：分配位置 6：入柜完成上报 7：取完成上报 8：还上报 9：报废 10：替换 11：登入
{
    QJsonObject json_Ok;
    QJsonObject json_Two;
    QJsonDocument document;
    QString stash_J_QString[10];
    QByteArray byte_array;

    QSqlQuery query;
    int stash_J_Int[10];
/************/
    user->user_Id=1;//暂时使用
//    query.exec(QString("select * from T_UserInfo"));
//    query.seek(0);
//    user->user_Id = query.value(0).toInt();//获取用户ID
/**************/


    if(model_json == 5)//分配位置
    {

        query.exec(QString("select * from %1")//从id=rownum中选中所有属性 '*' /也可指定 'name'
                   .arg(T_tableName));
        query.seek(T_tableNo);

        stash_J_QString[0] = query.value(7).toString();//drawerSize
        stash_J_Int[1] = query.value(10).toInt();//attribut


        qDebug()<<stash_J_QString[0]<<"////////////"<<stash_J_Int[1]<<"-----"<<query.value(0).toInt();


        json_Ok.insert("cabinetNo",QString(CABINETNO));//生成JSON
        json_Ok.insert("drawerSize",stash_J_QString[0]);
        json_Ok.insert("attribute",stash_J_Int[1]);//

        document.setObject(json_Ok);
        byte_array=document.toJson(QJsonDocument::Compact);
        QString json_str(byte_array);

        postHttp(5,json_str);//发送http
    }

    else if(model_json == 6)//入柜完成上报
    {

        query.exec(QString("select * from %1")//从id=rownum中选中所有属性 '*' /也可指定 'name'
                   .arg(T_tableName));
        query.seek(T_tableNo);

        stash_J_Int[1] = query.value(16).toInt();//agentiaTypeId
        stash_J_Int[0] = query.value(11).toInt();//PositionId
        stash_J_QString[0] = query.value(5).toString();//bottleCapacity
        stash_J_QString[1] = query.value(6).toString();//dose
        stash_J_QString[2] = query.value(8).toString();//expireDate
        stash_J_QString[3] = query.value(4).toString();

        if(stash_J_QString[3] == "正确操作")
        {
            json_Ok.insert("userId",user->user_Id);//生成JSON
            json_Ok.insert("agentiaTypeId",stash_J_Int[0]);
            json_Ok.insert("bottleCapacity",stash_J_QString[0]);
            json_Ok.insert("dose",stash_J_QString[1]);
            json_Ok.insert("positionId",stash_J_Int[1]);
            json_Ok.insert("expiryDate",stash_J_QString[2]);


            document.setObject(json_Ok);
            byte_array=document.toJson(QJsonDocument::Compact);
            QString json_str(byte_array);

            postHttp(6,json_str);//发送http
        }
        else
        {
            emit sendInfo_To_return_PutIn(1);
        }

    }

    else if(model_json == 7)//取 完成上报
    {

        query.exec(QString("select * from %1").arg(T_tableName));

        query.seek(T_tableNo);
       /**********/
        stash_J_Int[0] = query.value(9).toInt();//agentiaId
        stash_J_Int[1] = query.value(10).toInt();//positionId
        stash_J_QString[0] = query.value(11).toString();//judgeAttitude

        if(stash_J_QString[0] == "已摆放")
        {
            json_Ok.insert("userId",user->user_Id);
            json_Ok.insert("agentiaId",stash_J_Int[0]);
            json_Ok.insert("positionId",stash_J_Int[1]);



            document.setObject(json_Ok);
            byte_array=document.toJson(QJsonDocument::Compact);
            QString json_str(byte_array);

            postHttp(7,json_str);
        }else{
            emit sendInfo_To_sheetPage(2);//未摆放
        }

    }

    else if(model_json == 8)//归还
    {

        query.exec(QString("select * from %1").arg(T_tableName));
        query.seek(T_tableNo);

        stash_J_Int[0] = query.value(11).toInt();//agentiaId
        stash_J_Int[1] = query.value(12).toInt();//positionId
        stash_J_QString[0] = query.value(13).toString();//judgeAttitude
        stash_J_QString[1] = query.value(4).toString();

        if(stash_J_QString[0] == "正确操作")
        {
            json_Ok.insert("userId",user->user_Id);
            json_Ok.insert("agentiaId",stash_J_Int[0]);
            json_Ok.insert("dose",stash_J_QString[1]);
            json_Ok.insert("positionId",stash_J_Int[1]);



            document.setObject(json_Ok);
            byte_array=document.toJson(QJsonDocument::Compact);
            QString json_str(byte_array);

            postHttp(8,json_str);
        }else{
            emit sendInfo_To_return_PutIn(2);//未摆放
        }

    }
    else if(model_json == 9)//替换
    {

        query.exec(QString("select * from %1").arg(T_tableName));

        query.seek(T_tableNo);
       /**********/
        stash_J_Int[0] = query.value(11).toInt();//agentiaId
        stash_J_Int[1] = query.value(12).toInt();//positionId
        stash_J_QString[0] = query.value(13).toString();//judgeAttitude
        stash_J_QString[1] = query.value(6).toString();//newDose
        stash_J_QString[2] = query.value(7).toString();//expireDate

        if(stash_J_QString[0] == "正确操作")
        {
            json_Two.insert("dose",stash_J_QString[1]);
            json_Two.insert("expireDate",stash_J_QString[2]);

            json_Ok.insert("userId",user->user_Id);
            json_Ok.insert("agentiaId",stash_J_Int[0]);
            json_Ok.insert("positionId",stash_J_Int[1]);
            json_Ok.insert("newAgentia",json_Two);


            document.setObject(json_Ok);
            byte_array = document.toJson(QJsonDocument::Compact);
            QString json_str(byte_array);
            postHttp(9,json_str);

        }
        else if(stash_J_QString[0] == "报废操作")
        {
            json_Ok.insert("userId",user->user_Id);
            json_Ok.insert("agentiaId",stash_J_Int[0]);
            json_Ok.insert("positionId",stash_J_Int[1]);

            document.setObject(json_Ok);
            byte_array = document.toJson(QJsonDocument::Compact);
            QString json_str(byte_array);
            postHttp(10,json_str);

        }

        else{
            emit sendInfo_To_return_PutIn(2);//未摆放
        }

    }
    else if(model_json == 10)//报废
    {

        query.exec(QString("select * from %1").arg(T_tableName));
        query.seek(T_tableNo);
       /**********/
        stash_J_Int[0] = query.value(9).toInt();//agentiaId
        stash_J_Int[1] = query.value(10).toInt();//positionId
        stash_J_QString[0] = query.value(11).toString();//judgeAttitude

//        qDebug()<<stash_J_QString[0]<<" printf";
        if(stash_J_QString[0] == "已摆放")
        {
            json_Ok.insert("userId",user->user_Id);
            json_Ok.insert("agentiaId",stash_J_Int[0]);
            json_Ok.insert("positionId",stash_J_Int[1]);



            document.setObject(json_Ok);
            byte_array=document.toJson(QJsonDocument::Compact);
            QString json_str(byte_array);

            postHttp(10,json_str);
        }else{
            emit sendInfo_To_sheetPage(2);//未摆放
        }

    }
    else if(model_json == 11)//登入
    {
        if(T_tableNo == 0)
        {
            user->usernamer = T_tableName;
        }
        else if(T_tableNo == 1)
        {
            stash_J_QString[0] = T_tableName;

            json_Ok.insert("username",user->usernamer);
            json_Ok.insert("password",stash_J_QString[0]);
            json_Ok.insert("cabinetNo",QString(CABINETNO));

            document.setObject(json_Ok);
            byte_array=document.toJson(QJsonDocument::Compact);
            QString json_str(byte_array);

            postHttp(11,json_str);//发送http
        }
    }
}
