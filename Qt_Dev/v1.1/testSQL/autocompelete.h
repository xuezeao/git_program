#ifndef AUTOCOMPELETE_H
#define AUTOCOMPELETE_H

#include <QWidget>
#include <QLineEdit>
#include <QStringListModel>
namespace Ui {
class autocompelete;
}

class autocompelete : public QWidget
{
    Q_OBJECT

public:
    explicit autocompelete(QWidget *parent = 0);
    ~autocompelete();

private:
    Ui::autocompelete *ui;
    void editComplete();
    QLineEdit *search_list_edit;
     QStringListModel *word_list;
      QCompleter *completer;
      QStringListModel *string_list_model;
};

#endif // AUTOCOMPELETE_H
