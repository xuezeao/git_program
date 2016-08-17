
#include "test.h"
#include <QSpinBox>
#include <QTableView>
#include <QStandardItem>
#include <QHeaderView>
#include <QStandardItemModel>
#include <QItemDelegate>
#include <QComboBox>
#include <QApplication>
#include <QMouseEvent>
#include <QDialog>

test::test(QObject *parent) :
    QStyledItemDelegate(parent)
{

}

//void test::paint(QPainter *painter, const QStyleOptionViewItem &option, const QModelIndex &index) const
// {
//     QStyleOptionButton button;
//     QRect r = option.rect;//getting the rect of the cell
//     int x,y,w,h;
//     x = r.left() + r.width() - 30;//the X coordinate
//     y = r.top();//the Y coordinate
//     w = 30;//button width
//     h = 30;//button height
//     button.rect = QRect(x,y,w,h);
//     button.text = "=^.^=";
//     button.state = QStyle::State_Enabled;

//     QApplication::style()->drawControl( QStyle::CE_PushButton, &button, painter);
// }

// bool test::editorEvent(QEvent *event, QAbstractItemModel *model, const QStyleOptionViewItem &option, const QModelIndex &index)
// {
//     if( event->type() == QEvent::MouseButtonRelease )
//     {
//         QMouseEvent * e = (QMouseEvent *)event;
//         int clickX = e->x();
//         int clickY = e->y();

//         QRect r = option.rect;//getting the rect of the cell
//         int x,y,w,h;
//         x = r.left() + r.width() - 30;//the X coordinate
//         y = r.top();//the Y coordinate
//         w = 30;//button width
//         h = 30;//button height

//         if( clickX > x && clickX < x + w )
//             if( clickY > y && clickY < y + h )
//             {
//                 QDialog * d = new QDialog();
//                 d->setGeometry(0,0,100,100);
//                 d->show();
//             }
//     }
// }
















QWidget *test::createEditor(QWidget *parent, const QStyleOptionViewItem &/*option*/,
                            const QModelIndex &/*index*/)const
{
//    QSpinBox *editor = new QSpinBox(parent);
//    editor->setFrame(false);
//    editor->setMinimum(0);
//    editor->setMaximum(100);

//    return editor;

       QComboBox *cbo=new QComboBox(parent);
       cbo->addItem("1");
       cbo->addItem("2");
       cbo->addItem("3");
       cbo->installEventFilter(const_cast<test*>(this));
       return cbo;
}

void test::setEditorData(QWidget *editor,const QModelIndex &index)const
{
//    int value = index.model()->data(index,Qt::EditRole).toInt();
//    QSpinBox *spinBox = static_cast<QSpinBox*>(editor);
//    spinBox->setValue(value);
    QComboBox *cbo=static_cast<QComboBox*>(editor);
    cbo->setCurrentIndex(0);
}

void test::setModelData(QWidget *editor, QAbstractItemModel *model, const QModelIndex &index)const
{
//    QSpinBox *spinBox = static_cast <QSpinBox*>(editor);
//    spinBox->interpretText();
//    int value =(spinBox->value());
//    model->setData(index,value,Qt::EditRole);
    QString tmpstr;
    QComboBox *cbo = static_cast<QComboBox*>(editor);
    tmpstr.setNum(cbo->currentIndex());
    model->setData(index,tmpstr);
}

void test::updateEditorGeometry(QWidget *editor, const QStyleOptionViewItem &option, const QModelIndex &index)const
{
    editor->setGeometry(option.rect);
}

