#include "popuppage.h"
#include "ui_popuppage.h"
#include <QSqlQuery>
#include <QSqlDatabase>
#include <QMessageBox>
#include <QDebug>


popupPage::popupPage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::popupPage)
{
    ui->setupUi(this);
    model = new QSqlTableModel(this);
    model->setEditStrategy(QSqlTableModel::OnFieldChange);//恢复原来自保持模式
    model->setTable("placeDurg");
    model->select();

//    qDebug()<<rowAllNum;

   model->removeColumns(3,4);//隐藏不需要从第4列到第7类的所有row

//    ui->tableView->setModel(model);
//   ui->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);//不可窗口编辑
    showNeedPlaceReagent();


}

popupPage::~popupPage()
{
    delete ui;
}

void popupPage::on_pushButton_backPreviousOption_clicked()//返回入柜编辑窗口
{
    emit backplacepage();
}

void popupPage::showNeedPlaceReagent()
{
    QSqlQuery query;
    static int acount=1;
        query.exec(QString("select * from placeDurg where rowid = '%1'")//从id=rownum中选中所有属性 '*' /也可指定 'name'
                 .arg(acount));//选中表格中最后一行并执行操作exec，没有经过exec的都是没有执行
        query.next();//指向下一行表格
        model->setFilter(QString("rowid = '%1'").arg(acount));//取得所要显示的信息
        model->select();
        QString showName = query.value(1).toString();//名字
        QString showLocation = query.value(2).toString();
        QString showVolume = query.value(3).toString();


        qDebug()<<showName<<"  "+showVolume<<"  "+showLocation;
        ui->textBrowser_showReagentName->setText(showName);
        ui->textBrowser_showReagentVolume->setText(showVolume);
        ui->textBrowser_showReagentlocation->setText(showLocation);

         acount++;

        if(showName=="")
 {
            int ok = QMessageBox::warning(this,tr("摆放完成"),tr("ok"),QMessageBox::Yes,QMessageBox::No);
            if(ok==QMessageBox::Yes)
             emit backplacepage();
        }


}

void popupPage::on_pushButton_placedNext_clicked()
{

    model->setData(model->index(0,4),"已放");//更改状态
//  model->setData(model->index(rowNumIndex-1,3),"已放");//为自增位置预留位置
    showNeedPlaceReagent();
}

void popupPage::on_pushButton_jumpThisOption_clicked()
{
     showNeedPlaceReagent();
}

