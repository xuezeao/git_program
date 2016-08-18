#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    word_list<<"Java"<<"C++"<<"C#"<<"PHP"<<"Perl"<<"Python"<<"Delphi"<<"Ruby";
    QFile *inFile = new QFile ("input.txt");

    search_line_edit = new QLineEdit(this);
    completer = new QCompleter(this);
    string_list_model = new QStringListModel(word_list, this);
    completer->setCaseSensitivity(Qt::CaseInsensitive);
    completer->setModel(string_list_model);
    search_line_edit->setCompleter(completer);
    connect(search_line_edit, SIGNAL(editingFinished()), this, SLOT(editComplete()));

}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::editComplete()
{
    QString text = search_line_edit->text();
    if(QString::compare(text, QString("")) != 0) {
        bool is_contains = word_list.contains(text, Qt::CaseInsensitive);
        if(!is_contains) {
           word_list<<text;
           string_list_model->setStringList(word_list);
           //completer->setModel(new QStringListModel(wordList, this));
        }
    }
}
