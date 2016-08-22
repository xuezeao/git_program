#include "searchwindow.h"
#include "ui_searchwindow.h"
#include <QSqlRecord>
#include <QDebug>
#include <QSqlTableModel>
#include <QSqlQuery>
#include <QMessageBox>
#include <QMouseEvent>
#include <QSqlQueryModel>
#include <QComboBox>
#include <QPushButton>
#include <QMouseEvent>
#include <QHeaderView>
searchWindow::searchWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::searchWindow)
{
    ui->setupUi(this);
    createArray();
    qDebug()<<NeedSheet[10];
    qDebug()<<searchSheet[10];
    teapage = new additionNews(this);
    model = new QSqlTableModel(this);
    delFunction = new delNews(this);

    model->setTable("placeDurg");
    model->setEditStrategy(QSqlTableModel::OnManualSubmit);
    model->select();
    ui->tableView_showSearch->setModel(model);
    ui->tableView_showSearch->setEditTriggers(QAbstractItemView::NoEditTriggers);//窗口不可编辑
    ui->tableView_showSearch->viewport()->installEventFilter(this);//设置窗口鼠标事件

  ui->tableView_showSearch->horizontalHeader()->setStretchLastSection(true);
  ui-> tableView_showSearch->setItemDelegateForColumn(0, new additionNews);

    applyNews = new QSqlTableModel(this);//关联数据库，设置为自动保存，窗口不可编辑
    applyNews->setTable("choiceReagent");
    applyNews->setEditStrategy(QSqlTableModel::OnManualSubmit);
    applyNews->select();
//    QComboBox *comBox = new QComboBox();
//    comBox->addItem("F");
//    comBox->addItem("M");
//    ui->tableView_showSearch->setIndexWidget(model->index(0,0),comBox);
    //可实现在表中显示部分按钮
//    QPushButton *pushbutton = new QPushButton();
//    ui->tableView_showSearch->setIndexWidget(model->index(0,0),pushbutton);
//    ui->tableView_showNeedReagent->setModel(applyNews);
    ui->tableView_showNeedReagent->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableView_showNeedReagent->viewport()->installEventFilter(this);
    ui->tableView_showNeedReagent->setItemDelegateForColumn(0,new delNews);

    ui->tableView_showSearch->viewport()->installEventFilter(this);//设置窗口鼠标事件
//    addCheckBox(model,1);

//    connect(teapage,SIGNAL(send()),this,SLOT(testslot()));
}

//void searchWindow::testslot()
//{
//    qDebug()<<"sended";
//}

searchWindow::~searchWindow()
{
    delete ui;
}

void searchWindow::addCheckBox(QSqlTableModel *modelName,int modelAB)
{
    int adf=modelAB;
    choiceModel = modelName;
    int nRow = choiceModel->rowCount();
    for(int i=0;i<nRow;++i)
    {
//        QCheckBox *((searchSheet[i]))= new QCheckBox(this);
//        ui->tableView_showSearch->setIndexWidget(choiceModel->index(i,0),searchSheet[i]);
    }
}
void searchWindow::createArray()
{
    for(int i=0;i<255;++i)
    {
        QString oneSheet=(QString("a%1").arg(i));
        QString twoSheet=(QString("b%1").arg(i));
        searchSheet[i]=oneSheet;
        NeedSheet[i]=twoSheet;

    }
}

void searchWindow::on_pushButton_searchNews_clicked()
{
    QString reagentName = ui->lineEdit_search->text();//获取搜索框内容
    reagentName="*";
    QSqlQueryModel *model1 = new QSqlQueryModel(ui->tableView_showSearch);

    model->setFilter(QString("试剂名称 = '*%1'").arg(reagentName));//筛选结果

    model->select();//显示

    // QSqlQuery query;
   // query.exec(QString("select * from placeDurg where 试剂名称 like '%'%1'%'").arg(reagentName));//将A表向b添加选中记录

}

void searchWindow::addNewsToApplySheet()//将选定信息添加到执行框
{
     int curRow = ui->tableView_showSearch->currentIndex().row();
     qDebug()<<"*********************"<<curRow;
     QSqlRecord record = model->record(curRow);//获取指定行的记录
    qDebug()<<record;
    QSqlQuery query;
    query.exec(QString("insert into choiceReagent select * from placeDurg where rowid='%1'").arg(curRow+1));//将A表向b添加选中记录
  //  query.next();   //作用同上面这句函数效果一致
//    QSqlRecord record1 = applyNews->record(1);
//    qDebug()<<"12312312"<<record1;
//    QSqlRecord record21 = applyNews->record(0);
//    qDebug()<<"12312312"<<record21;
    applyNews->setTable("choiceReagent");

    applyNews->select();
    ui->tableView_showNeedReagent->setModel(applyNews);

   //  int getRowNum = applyNews->rowCount();//获得行数
 //    applyNews->insertRow(getRowNum);
//     applyNews->setData(applyNews->index(getRowNum),record);

}

void searchWindow::delNewsFromApplySheet()
{
//    applyNews->setTable("choiceReagent");

//    applyNews->select();
//    ui->tableView_showNeedReagent->setModel(applyNews);

    //获取选中的行
    int curRow = ui->tableView_showNeedReagent->currentIndex().row();

    //删除该行
    applyNews->removeRow(curRow);
    applyNews->submitAll(); //否则提交，在数据库中删除该行

}

void searchWindow::on_pushButton_delThisNews_clicked()

{
    //获取选中的行
    int curRow = ui->tableView_showNeedReagent->currentIndex().row();

    //删除该行
    applyNews->removeRow(curRow);

//    qDebug()<<"--------------------------"<<curRow;
  //  int ok = QMessageBox::warning(this,tr("删除当前行!"),tr("你确定"
//                                                       "删除当前行吗？"),
//                                  QMessageBox::Yes,QMessageBox::No);
//    if(ok == QMessageBox::No)
//    {
//        applyNews->revertAll(); //如果不删除，则撤销
//    }
//    else
    applyNews->submitAll(); //否则提交，在数据库中删除该行

}
bool searchWindow::eventFilter(QObject * obj, QEvent * event)
{
    QMouseEvent *e = (QMouseEvent *) event;
    int clickX =e->x();
    int clickY =e->y();

//    qDebug()<<clickX;
//    qDebug()<<clickY;
//    qDebug()<<"局部-------------------";


//    int globalX=e->globalX();//获取全局变量
//    int globalY=e->globalY();
//    if(obj == ui->tableView_showSearch)
//    qDebug()<<globalX;
//    qDebug()<<globalY+"全局---------------------";

    if(obj==ui->tableView_showSearch->viewport())
    {
//        qDebug()<<"OK sending";
        if(event->type() == QEvent::MouseButtonPress)
      {
            int rowAllAAcount = model->rowCount();
            int tableAW = ui->tableView_showSearch->columnWidth(0);
            int tableAH = ui->tableView_showSearch->rowHeight(0);
            if(clickX > 0 && clickX < tableAW)
            {
                if(clickY > 0 && clickY < rowAllAAcount*tableAH)
                {
                    qDebug()<<"one OK";
                   addNewsToApplySheet();
                }
            }

       }

    }
    if(obj==ui->tableView_showNeedReagent->viewport())
    {
         if(event->type() == QEvent::MouseButtonPress)
       {
             int rowAllBAcount = applyNews->rowCount();
             int tableBW = ui->tableView_showNeedReagent->columnWidth(0);
             int tableBH = ui->tableView_showNeedReagent->rowHeight(0);
             if(clickX > 0 && clickX < tableBW)
             {
                 if(clickY > 0 && clickY < rowAllBAcount*tableBH)
                 {
                     qDebug()<<"two OK ";
                     delNewsFromApplySheet();

                 }
             }

        }
    }

}


//    QMouseEvent *e = (QMouseEvent *) event;
//    int clickX = e->x();
//    int clickY = e->y();

//  qDebug()<<"a";
//    int rowAllAcount = model->rowCount();
//    int tableW = ui->tableView_showSearch->columnWidth(0);
//    int tableH = ui->tableView_showSearch->rowHeight(0);

//     model->select();
//     ui->tableView_showSearch->setModel(model);

//      qDebug()<<clickX;
//     qDebug()<<clickY;
//     qDebug()<<(tableH*rowAllAcount);
////qDebug()<<"12";
//        if(clickX > 0 && clickX < tableW )
////        {
// if(obj == ui->tableView_showSearch)
//     if(event->type() == QEvent::MouseButtonDblClick)
//         {
//            qDebug()<<"1  OK";
//            if(clickY < rowAllAcount*tableH )
//            {
                //addNewsToApplySheet();


//                return true;



//        return searchWindow::eventFilter(watched,event);



void searchWindow::on_commandLinkButton_clicked()
{
    emit GPageToMainUi();
}
