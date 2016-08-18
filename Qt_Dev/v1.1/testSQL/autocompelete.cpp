#include "autocompelete.h"
#include "ui_autocompelete.h"
#include <QWidget>
#include <QStringListModel>
#include <QCompleter>
autocompelete::autocompelete(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::autocompelete)
{
    ui->setupUi(this);

    word_list = new QStringListModel(this);
    string_list_model = new QStringListModel(this);
    completer=new QCompleter(this);
    completer->setCaseSensitivity(Qt::CaseInsensitive);
    completer->setModel(string_list_model);
    ui->lineEdit->setCompleter(completer);

   connect(ui->lineEdit, SIGNAL(editingFinished()), this, SLOT(editComplete()));

}

autocompelete::~autocompelete()
{
    delete ui;
}
//void autocompelete::editComplete()
//{
//    QString text = ui->lineEdit->text();
//    if(QString::compare(text, QString("")) != 0) {
//        bool is_contains = word_list.contains(text, Qt::CaseInsensitive);
//        if(!is_contains) {
//           word_list<<text;
//           string_list_model->setStringList(word_list);
//           //completer->setModel(new QStringListModel(wordList, this));
//        }
//    }
//}
