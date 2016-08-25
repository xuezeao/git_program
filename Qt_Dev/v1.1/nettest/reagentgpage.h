#ifndef REAGENTGPAGE_H
#define REAGENTGPAGE_H

#include <QWidget>

namespace Ui {
class reagentGPage;
}

class reagentGPage : public QWidget
{
    Q_OBJECT

public:
    explicit reagentGPage(QWidget *parent = 0);
    ~reagentGPage();
signals:
    void closeGPage_To_Main();
private slots:
    void on_pushButton_searchNews_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

    void on_commandLinkButton_clicked();

private:
    Ui::reagentGPage *ui;
};

#endif // REAGENTGPAGE_H
