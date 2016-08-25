#ifndef REAGENTPPAGE_H
#define REAGENTPPAGE_H

#include <QWidget>

namespace Ui {
class reagentPPage;
}

class reagentPPage : public QWidget
{
    Q_OBJECT

public:
    explicit reagentPPage(QWidget *parent = 0);
    ~reagentPPage();
signals:
    void closePPage_To_Main();
private slots:
    void on_commandLinkButton_B_clicked();

    void on_pushButton_Preagent_clicked();

    void on_pushButton_Dreagent_clicked();

private:
    Ui::reagentPPage *ui;
};

#endif // REAGENTPPAGE_H
