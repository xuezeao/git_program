#include "httpgp.h"

HttpGP::HttpGP(QObject *parent) :
    QObject(parent)
{
    user = new User;
    http_info = new Http_info;

    accessManager = new QNetworkAccessManager;
    msgBox = new QMessageBox;
    request = new QNetworkRequest();

    connect(accessManager,SIGNAL(finished(QNetworkReply*)),this,SLOT(finished(QNetworkReply*)));

}

void HttpGP::JuageOperatorStatus(QString name)
{

}

void HttpGP::JsonForSend(int model_json, QString T_tableName, int T_tableNo, int allI)
{
    HttpInit();

    http_info->http_modelChoice = model_json;
    http_info->tableName = T_tableName;
    http_info->tableNo = T_tableNo;

    taskHandleCount = 0;
    PackageJson(model_json);
}

void HttpGP::HttpInit(void)
{
    http_info->http_modelChoice = 0;
    http_info->model_json = 0;
    http_info->tableNo = 0;
    http_info->tableName = "";
    http_info->taskRole = 0;
}

void HttpGP::GetHttp(void)//get cabinet info
{
//    request->setUrl(QUrl(QString("http://localhost:3000/arm/initialInfo/%1").arg(CABINETNO)));
    request->setUrl(QUrl(QString("http://121.43.159.215:3000/arm/initialInfo/%1").arg(CABINETNO)));
    accessManager->get(*request);//通过发送数据，返回值保存在reply指针里.

    http_info->http_modelChoice = 0;
}

void HttpGP::PostHttp(int postId_NO, QString postStr)
//0:测试地址 1：获取在位试剂 2：获取试剂类型 3：获取待归还试剂 4：获取地址信息 5:请求空闲位置
//6:入柜完成 7：取完成  8：还完成  9：替换完成 10：报废完成 11：登入 12：点验 13：报警信息 14：任务列表
{
    QString address = "";

    switch (postId_NO){
    case 1 :{
        address = "availableAgentiaList";//获取在位试剂列表
        postStr = QString("{\"cabinetNo\":\"%1\"}").arg(CABINETNO);
        http_info->http_modelChoice = 1;
        break;
    }
    case 2 :{
        address = "agentiaTypeList";//获取试剂类型列表
        http_info->http_modelChoice = 2;
        break;
    }
    case 3 :{
        address = "occupiedAgentiaList";//获取待归还试剂
        postStr = QString("{\"userId\":%1,\"cabinetNo\":\"%2\"}").arg(user->user_Id).arg(CABINETNO);
        http_info->http_modelChoice = 3;
        break;
    }
    case 5 :{
        address = "allocPosition";//获取地址信息
        http_info->http_modelChoice = 5;
        break;
    }
    case 6 :{
        address = "putIn";//入柜完成
        http_info->http_modelChoice = 6;
        break;
    }
    case 7 :{
        address = "takeOut";//取 完成
        http_info->http_modelChoice = 7;
        break;
    }
    case 8 :{
        address = "giveBack";//还 完成
        http_info->http_modelChoice = 8;
        break;
    }
    case 9 :{
        address = "replace";//替换 完成
        http_info->http_modelChoice = 9;
        break;
    }
    case 10 :{
        address = "scrap";//报废 完成
        http_info->http_modelChoice = 10;
        break;
    }
    case 11 :{
        address = "login";//登入
        http_info->http_modelChoice = 11;
        break;
    }
    case 12 :{
        address = "check";//点验
        http_info->http_modelChoice = 12;
    }
    case 13:{
        address = "warningLog";//报警
        http_info->http_modelChoice = 13;
    }
    case 14:{
        address = "taskList";//获取任务列表
        http_info->http_modelChoice = 14;
    }
    default:
        break;
    }

//    request->setUrl(QUrl(QString("http://localhost:3000/arm/%1").arg(address)));
    request->setUrl(QUrl(QString("http://121.43.159.215:3000/arm/%1").arg(address)));
    request->setHeader(QNetworkRequest::ContentTypeHeader,"application/json");

    QByteArray postData = postStr.toUtf8();//翻译
    accessManager->post(*request, postData);

    qDebug() << QDateTime::currentDateTime() << "send";
}

void HttpGP::finished(QNetworkReply *reply)
{
     qDebug() << QDateTime::currentDateTime() << "received";

     if (reply->error() == QNetworkReply::NoError)
     {
         QTextCodec *codec = QTextCodec::codecForName("utf-8");
         QString all = codec->toUnicode(reply->readAll());
         QJsonDocument all_info = QJsonDocument::fromJson(all.toUtf8());

         int currentRole = UnpackageJson(all_info, http_info->http_modelChoice);//解析
         JuageOperatorStatus(currentRole);//判断
     }
     else
     {
         qDebug() << "http error here finished";
         JuageOperatorStatus(0);//判断
     }

     reply->deleteLater();//释放reply

}

int HttpGP::UnpackageJson(QJsonDocument str, int t)
//5: 入柜 6：入柜完成 7：取完成 8:还完成  9:替换完成 10：报废完成 11：登入
{
    QString    s_str[11]    = {0};//save string
    int        s_int[11]    = {0};//save int value
    int        s_allInfoNum = 0;//save all info number
    QJsonValue s_json[11]   = {0};//save jsonvalue
    QJsonArray s_JA;                //savef jsonArray
    QJsonObject analyze_Z = str.object();;
    QJsonObject analyze_C;
    /*****存储信息******/
    int  s_positionNo = 0;
    int  s_drawerNO   = 0;
    int  s_positionId = 0;
    int  s_taskStatus = 0;
    int  s_taskType   = 0;
    bool s_success    = false;

    QString month = "";
    QString year = "";
    QString day = "";
    QString time = "";

    QString newMonth = "";
    QString newYear = "";
    QString newDay = "";
    QString newTime = "";

    if (t == 0)
    {
        s_json[0] = analyze_Z["cabinetName"].toString();
        s_str[0]  = s_json[0].toString();

        s_json[1] = analyze_Z["groupId"].toInt();
        s_int[1]  = s_json[1].toInt();

        s_json[2] = analyze_Z["groupName"].toString();
        s_str[2]  = s_json[2].toString();

        s_json[3] = analyze_Z["drawerAmount"].toInt();
        s_int[3]  = s_json[3].toInt();

        s_allInfoNum = s_int[3];

        query.prepare("insert into T_CabinetInfo (cabinetName,groupId,groupName,drawerAmount) values (?,?,?,?)");
        query.addBindValue(s_str[0]);
        query.addBindValue(s_int[1] );
        query.addBindValue(s_str[2]);
        query.addBindValue(s_int[3]);
        query.exec();

        s_JA = analyze_Z["drawerList"].toArray();

        for (int i = 0; i < s_allInfoNum; i++)
        {
            analyze_C = s_JA[i].toObject();

            s_json[0] = analyze_C["drawerNo"].toInt();
            s_int[0]  = s_json[0].toInt();

            s_json[1] = analyze_C["drawerName"].toString();
            s_str[1]  = s_json[1].toString();

            s_json[2] = analyze_C["drawerSize"].toString();
            s_str[2]  = s_json[2].toString();

            s_json[3] = analyze_C["positionAmount"].toInt();
            s_int[3]  = s_json[3].toInt();

            s_json[4] = analyze_C["attribte"].toInt();
            s_int[4]  = s_json[4].toInt();

            query.prepare("insert into T_DrawerList (drawerNo,drawerName,drawerSize,positionAmount,attribute) values (?,?,?,?,?)");
            query.addBindValue(s_int[0]);
            query.addBindValue(s_str[1]);
            query.addBindValue(s_str[2]);
            query.addBindValue(s_int[3]);
            query.addBindValue(s_int[4]);
            query.exec();

        }
    }
    else if (t == 1)//获取在位试剂列表
    {
        ;
    }
    else if (t == 2)//获取试剂类型
    {
        ;
    }
    else if (t == 3)//获取待归还试剂
    {
        ;
    }
    else if (t == 5)//入柜申请分配位置
    {
        s_json[0] = analyze_Z["success"].toBool();
        s_success = s_json[0].toBool();

        if (s_success)
        {
            s_json[0]    = analyze_Z["positionNo"].toInt();
            s_positionNo = s_json[0].toInt();

            s_json[1]    = analyze_Z["drawerNo"].toInt();
            s_drawerNO   = s_json[1].toInt();

            s_json[2]    = analyze_Z["positionId"].toInt();
            s_positionId = s_json[2].toInt();
            user->positionId_allocPosition = H_positionId;

            query.exec(QString("update %1 set positionId='%2',drawerNo='%3',positionNo='%4' where id=%5")
                       .arg(http_info->tableName).arg(s_positionId).arg(s_drawerNO).arg(s_positionNo)
                       .arg(taskHandleCount));
        }
        else
        {
            qDebug() << "error--request positionId";
        }

    }
    else if (t == 6)//入柜完成
    {
        s_json[0] = analyze_Z["success"].toBool();
        s_success = s_json[0].toBool();

        if (s_success)
        {
            ;
        }
        else
        {
            qDebug() << "error--send putin ok";
        }
    }
    else if (t == 7)//取 完成
    {
        s_json[0] = analyze_Z["success"].toBool();
        s_success = s_json[0].toBool();

        if (s_success)
        {
            ;
        }
        else
        {
            qDebug() << "error--send Get ok";
        }
    }
    else if (t == 8)//还 完成
    {
        s_json[0] = analyze_Z["success"].toBool();
        s_success = s_json[0].toBool();

        if (s_success)
        {
            ;
        }
        else
        {
            qDebug() << "error--send give back ok";
        }
    }
    else if (t == 9)//替换完成
    {
        s_json[0] = analyze_Z["success"].toBool();
        s_success = s_json[0].toBool();

        if (s_success)
        {
            ;
        }
        else
        {
            qDebug() << "error--send change ok";
        }
    }
    else if (t == 10)//报废
    {
        s_json[0] = analyze_Z["success"].toBool();
        s_success = s_json[0].toBool();

        if (s_success)
        {
            ;
        }
        else
        {
            qDebug() << "error--send remove ok";
        }
    }
    else if (t == 11)//登入
    {
        s_json[0] = analyze_Z["success"].toBool();
        s_success = s_json[0].toBool();

        if (s_success)
        {
            s_json[0] = analyze_Z["userId"].toInt();
            user->user_id = s_json[0].toInt();

            s_json[1] = analyze_Z["role"].toInt();
            user->user_role = s_json[1].toInt();

            query.exec(QString("DELETE from T_UserInfo"));//初始化表格

            query.prepare("insert into T_UserInfo (userId,role) values (?,?)");
            query.addBindValue(user->user_id);
            query.addBindValue(user->user_role);
            query.exec();

        }
        else
        {
            qDebug() << "error--send enter";
        }
    }
    else if (t == 12)//点验
    {
        s_json[0] = analyze_Z["success"].toBool();
        s_success = s_json[0].toBool();

        if (s_success)
        {
            ;
        }
        else
        {
            qDebug() << "error--send check ok";
        }
    }
    else if (t == 13)//报错
    {
        s_json[0] = analyze_Z["success"].toBool();
        s_success = s_json[0].toBool();

        if (s_success)
        {
            ;
        }
        else
        {
            qDebug() << "error--send check ok";
        }
    }
    else if (t == 14)//获取任务列表
    {

        s_json[0] = analyze_Z["success"].toBool();
        s_success = s_json[0].toBool();

        if (s_success)
        {
            /*******************初始化表格***********************/

            query.exec(QString("DELETE from Task_sheet"));//任务列表

            /*******************************************/

            s_json[0] = analyze_Z["amount"].toInt();
            s_allInfoNum = s_json[0].toInt();

            s_JA = analyze_Z["agentiaList"].toArray();
            for (int i = 0; i < s_allInfoNum; i++)
            {
                analyze_C = s_JA[i].toObject();

                s_json[0] = analyze_C["taskType"].toInt();
                s_int[0]  = s_json[0].toInt();
                s_taskType= s_int[0];

                s_json[1] = analyze_C["taskStatus"].toInt();
                s_int[1]  = s_json[1].toInt();
                s_taskStatus = s_int[1];

                s_json[2] = analyze_C["expiryDate"].toString();
                s_str[2]  = s_json[2].toString();
                year = s_str[2].section("-",0,0);
                month = s_str[2].section("-",1,1);
                day = s_str[2].section("-",2,2);
                day = day.section("T",0,0);
                time = QString("%1.%2.%3").arg(year).arg(month).arg(day);

                s_json[3] = analyze_C["agentiaName"].toString();
                s_str[3]  = s_json[3].toString();

                s_json[4] = analyze_C["dose"].toString();
                s_str[4]  = s_json[4].toString();

                s_json[5] = analyze_C["drawerNo"].toInt();
                s_int[5]  = s_json[5].toInt();

                s_json[6] = analyze_C["positionNo"].toInt();
                s_int[6]  = s_json[6].toInt();

                s_json[7] = analyze_C["cabinetNo"].toString();
                s_str[7]  = s_json[7].toString();

                s_json[8] = analyze_C["newAgentia_dose"].toString();
                s_str[8]  = s_json[8].toString();

                s_json[9] = analyze_C["newAgentia_expiryDate"].toString();
                s_str[9]  = s_json[9].toString();
                newYear = s_str[9].section("-",0,0);
                newMonth = s_str[9].section("-",1,1);
                newDay = s_str[9].section("-",2,2);
                newDay = day.section("T",0,0);
                newTime = QString("%1.%2.%3").arg(newYear).arg(newMonth).arg(newDay);

                s_json[10]= analyze_C["taskId"].toInt();
                s_int[10] = s_json[10].toInt();

                /***************加入任务列表*************/
                query.prepare("insert into Task_sheet (id,taskId,taskType,taskStatus,\
                              expiryDate,agentiaName,dose,positionNo,drawerNo,\
                              cabinetNo,newAgentia_dose,newAgentia_expiryDate) values (?,?,?,?,?,?\
                                                                                       ?,?,?,?,?,?)");
                query.addBindValue(i+1);
                query.addBindValue(s_int[10]);
                query.addBindValue(s_int[0]);
                query.addBindValue(s_int[1]);
                query.addBindValue(time);
                query.addBindValue(s_str[3]);
                query.addBindValue(s_str[4]);
                query.addBindValue(s_int[5]);
                query.addBindValue(s_int[6]);
                query.addBindValue(s_str[7]);
                query.addBindValue(s_str[8]);
                query.addBindValue(newTime);
                query.exec();

            }
        }
    }
}


void HttpGP::PackageJson(int order)
{

}



















