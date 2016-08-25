#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "tablemodel.h"
#include <QList>
#include <QTableView>
#include "checkboxdelegate.h"
#include "tableheaderview.h"
#include <QWidget>
#define CHECK_BOX_COLUMN 0
#define File_PATH_COLUMN 1
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QTableView *pTableView = new QTableView(this);
    TableModel *pModel = new TableModel(this);
    TableHeaderView *pHeader = new TableHeaderView;
    CheckBoxDelegate *pDelegate = new CheckBoxDelegate(this);

    pTableView->setHorizontalHeader(pHeader);
    pTableView->setModel(pModel);
    pTableView->setItemDelegate(pDelegate);

    connect(pModel, SIGNAL(stateChanged(int)), pHeader, SLOT(onStateChanged(int)));
    connect(pHeader, SIGNAL(stateChanged(int)), pModel, SLOT(onStateChanged(int)));
//    QTableView *pTableView = new QTableView(this);
//    TableModel *pModel = new TableModel(this);
//    CheckBoxDelegate *pDelegate = new CheckBoxDelegate(this);

//    // 设置单行选中、最后一列拉伸、表头不高亮、无边框等
//    pTableView->setSelectionBehavior(QAbstractItemView::SelectRows);
//    pTableView->horizontalHeader()->setStretchLastSection(true);
//    pTableView->horizontalHeader()->setHighlightSections(false);
//    pTableView->verticalHeader()->setVisible(false);
//    pTableView->setShowGrid(false);
//    pTableView->setFrameShape(QFrame::NoFrame);
//    pTableView->setSelectionMode(QAbstractItemView::SingleSelection);
//    pTableView->setModel(pModel);
//    pTableView->setItemDelegate(pDelegate);


//    // 加载数据、更新界面
//    QList<FileRecord> recordList;
//    for (int i = 0; i < 5; ++i)
//    {
//        FileRecord record;
//        record.bChecked = false;
//        record.strFilePath = QString("E:/Qt/image_%1.png").arg(i + 1);
//        recordList.append(record);

//    }
//    pModel->updateData(recordList);
}

MainWindow::~MainWindow()
{
    delete ui;
}
