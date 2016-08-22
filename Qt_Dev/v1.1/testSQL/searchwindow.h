#ifndef SEARCHWINDOW_H
#define SEARCHWINDOW_H

#include <QWidget>
#include <QSqlTableModel>
#include "test.h"
#include "popuppage.h"

namespace Ui {
class searchWindow;
}

class searchWindow : public QWidget
{
    Q_OBJECT

public:
    explicit searchWindow(QWidget *parent = 0);
    ~searchWindow();
    void searchSelect(int num);
public slots:
      void addNewsToApplySheet();//把数据添加到执行框
      void delNewsFromApplySheet();//把数据从执行框删除

//       void testslot();
private slots:
    void on_pushButton_searchNews_clicked();

    void on_pushButton_delThisNews_clicked();

    void on_commandLinkButton_clicked();
    void operatePage_To_SEA();
    void on_pushButton_sureNewsApply_clicked();


signals:
    void GPageToMainUi();
private:
    Ui::searchWindow *ui;
    QSqlTableModel *model;
    QSqlTableModel *applyNews;
    QSqlTableModel *choiceModel;
    additionNews *teapage;
    delNews *delFunction;
    popupPage *GPage_SEA;
    void addCheckBox(QSqlTableModel *modelName,int modelAB);
    void createArray();//自动创建255个字段用于给Checkout命名
    QString searchSheet[255];
    QString NeedSheet[255];
    void mainUI();//执行工作


bool eventFilter(QObject * obj, QEvent * event);
// bool eventFilter(QObject * watched, QEvent * event);//设置鼠标活动
    void deleteNewsFromApplySheet();//从执行框中删除添加的信息

    void mou();
};

#endif // SEARCHWINDOW_H
