#ifndef TEST_H
#define TEST_H

#include <QMouseEvent>
#include <QItemDelegate>
#include <QTableView>
#include <QStyledItemDelegate>
#include <QLineEdit>
#include <QSpinBox>
#include <QComboBox>
#include <QStandardItemModel>
#include <QApplication>
#include <QDialog>
#include <QWidget>
#include <QLineEdit>


class additionNews : public QStyledItemDelegate //继承QItemDelegate这个才是关键
{
    Q_OBJECT
public:
//    /*explicit */additionNews(QObject *parent = 0);
    additionNews(QObject *parent = 0): QStyledItemDelegate(parent) { }

////    void paint(QPainter *painter, const QStyleOptionViewItem &option, const QModelIndex &index) const;
//    QWidget *createEditor(QWidget *parent, const QStyleOptionViewItem &option,
//                          const QModelIndex &index)const;

//    void setEditorData(QWidget *editor, const QModelIndex &index)const ;
//    void setModelData(QWidget *editor, QAbstractItemModel *model,
//                      const QModelIndex &index)const ;

//    void updateEditorGeometry(QWidget *editor,const QStyleOptionViewItem &option, const QModelIndex &index)const ;
//    QTableView *tableView;
//    void hope();


      void paint(QPainter *painter, const QStyleOptionViewItem &option,
                 const QModelIndex &index) const;

      //      bool editorEvent(QEvent *event, QAbstractItemModel *model, const QStyleOptionViewItem &option, const QModelIndex &index);



};


class delNews : public QStyledItemDelegate //继承QItemDelegate这个才是关键
{
    Q_OBJECT
public:
//    explicit delNews(QObject *parent = 0);
     delNews(QObject *parent = 0): QStyledItemDelegate(parent) { }

      void paint(QPainter *painter, const QStyleOptionViewItem &option,const QModelIndex &index) const;
      //      bool editorEvent(QEvent *event, QAbstractItemModel *model, const QStyleOptionViewItem &option, const QModelIndex &index);

};

//class checkBoxTest : public QStyledItemDelegate
//{
//    Q_OBJECT

//public:
//    checkBoxTest(QObject *parent = 0): QStyledItemDelegate(parent){}
//    QWidget *createEditor(QWidget * parent, const QStyleOptionViewItem & option, const QModelIndex & index) const;

//    bool editorEvent(QEvent * event, QAbstractItemModel * model,
//                     const QStyleOptionViewItem & option, const QModelIndex & index) ;

//    QVariant QAbstractItemModel::data(const QModelIndex & index, int role = Qt::DisplayRole) const;
//    QVariant headerData(int section, Qt::Orientation orientation, int role = Qt::DisplayRole) const;

//};

//class tableWidget01 : public QMainWindow
//{
// Q_OBJECT

//public:
// tableWidget01(QWidget *parent = 0, Qt::WFlags flags = 0);
// ~tableWidget01();
// private slots:
//  void onBtnSlectAllClicked();
//  void onBtnSendClicked();
//  void onBtnCancleClicked();
//private:
// void intit();


//private:
// Ui::tableWidget01Class ui;
//};









////编号列，只读委托
////这个方法我还真想不到，呵呵
//class ReadOnlyDelegate : public QItemDelegate
//{
//    Q_OBJECT
//public:
//    ReadOnlyDelegate(QObject *parent = 0): QItemDelegate(parent) { }
//    QWidget *createEditor(QWidget*parent, const QStyleOptionViewItem &option,
//        const QModelIndex &index) const
//    {
//        return NULL;
//    }
//};

////ID列，只能输入1－12个数字
////利用QLineEdit委托和正则表达式对输入进行限制
//class UserIDDelegate : public QItemDelegate
//{
//    Q_OBJECT
//public:
//    UserIDDelegate(QObject *parent = 0): QItemDelegate(parent) { }
//    QWidget *createEditor(QWidget *parent, const QStyleOptionViewItem &option,
//        const QModelIndex &index) const
//    {
//        QLineEdit *editor = new QLineEdit(parent);
//        QRegExp regExp("[0-9]{0,10}");
//        editor->setValidator(new QRegExpValidator(regExp, parent));
//        return editor;
//    }
//    void setEditorData(QWidget *editor, const QModelIndex &index) const
//    {
//        QString text = index.model()->data(index, Qt::EditRole).toString();
//        QLineEdit *lineEdit = static_cast<QLineEdit*>(editor);
//        lineEdit->setText(text);
//    }
//    void setModelData(QWidget *editor, QAbstractItemModel *model,
//        const QModelIndex &index) const
//    {
//        QLineEdit *lineEdit = static_cast<QLineEdit*>(editor);
//        QString text = lineEdit->text();
//        model->setData(index, text, Qt::EditRole);
//    }
//    void updateEditorGeometry(QWidget *editor,
//        const QStyleOptionViewItem &option, const QModelIndex &index) const
//    {
//        editor->setGeometry(option.rect);
//    }
//};

////年龄列，利用QSpinBox委托进行输入限制，只能输入1－100之间的数字
//class AgeDelegate : public QItemDelegate
//{
//    Q_OBJECT
//public:
//    AgeDelegate(QObject *parent = 0): QItemDelegate(parent) { }
//    QWidget *createEditor(QWidget *parent, const QStyleOptionViewItem &option,
//        const QModelIndex &index) const
//    {
//        QSpinBox *editor = new QSpinBox(parent);
//        editor->setMinimum(1);
//        editor->setMaximum(100);
//        return editor;
//    }
//    void setEditorData(QWidget *editor, const QModelIndex &index) const
//    {
//        int value = index.model()->data(index, Qt::EditRole).toInt();
//        QSpinBox *spinBox = static_cast<QSpinBox*>(editor);
//        spinBox->setValue(value);
//    }
//    void setModelData(QWidget *editor, QAbstractItemModel *model,
//        const QModelIndex &index) const
//    {
//        QSpinBox *spinBox = static_cast<QSpinBox*>(editor);
//        spinBox->interpretText();
//        int value = spinBox->value();
//        model->setData(index, value, Qt::EditRole);
//    }
//    void updateEditorGeometry(QWidget *editor,
//        const QStyleOptionViewItem &option, const QModelIndex &index) const
//    {
//        editor->setGeometry(option.rect);
//    }
//};

////性别列，利用QComboBox委托对输入进行限制
////这一列的单元格只能输入Male或Female
//class SexDelegate : public QItemDelegate
//{
//    Q_OBJECT
//public:
//    SexDelegate(QObject *parent = 0): QItemDelegate(parent) { }
//    QWidget *createEditor(QWidget *parent, const QStyleOptionViewItem &option,
//        const QModelIndex &index) const
//    {
//        QComboBox *editor = new QComboBox(parent);
//        editor->addItem("管制");
//        editor->addItem("非管制");
//        return editor;
//    }
//    void setEditorData(QWidget *editor, const QModelIndex &index) const
//    {
//        QString text = index.model()->data(index, Qt::EditRole).toString();
//        QComboBox *comboBox = static_cast<QComboBox*>(editor);
//        int tindex = comboBox->findText(text);
//        comboBox->setCurrentIndex(tindex);
//    }
//    void setModelData(QWidget *editor, QAbstractItemModel *model,
//        const QModelIndex &index) const
//    {
//        QComboBox *comboBox = static_cast<QComboBox*>(editor);
//        QString text = comboBox->currentText();
//        model->setData(index, text, Qt::EditRole);
//    }
//    void updateEditorGeometry(QWidget *editor,
//        const QStyleOptionViewItem &option, const QModelIndex &index) const
//    {
//        editor->setGeometry(option.rect);
//    }
//};

////头像列，只是在单元格中央放一张小图而已
////class IconDelegate : public QItemDelegate
////{
////    Q_OBJECT
////public:
////    IconDelegate(QObject *parent = 0): QItemDelegate(parent) { }
////    void paint(QPainter *painter, const QStyleOptionViewItem &option,
////        const QModelIndex & index ) const
////    {
////        //show.bmp是在工程目录中的一张图片（其实就是QQ的图标啦，呵呵）
////        QPixmap pixmap = QPixmap("show.bmp").scaled(24, 24);
////        qApp->style()->drawItemPixmap(painter, option.rect,  Qt::AlignCenter, QPixmap(pixmap));
////    }
////};
//class addpushbotton : public QItemDelegate
//{
//    Q_OBJECT
//signals:
//     void send();

//public:
//    addpushbotton(QObject *parent = 0): QItemDelegate(parent) { }
//    void paint(QPainter *painter, const QStyleOptionViewItem &option, const QModelIndex &index) const
//     {
//         QStyleOptionButton button;
//         QRect r = option.rect;//getting the rect of the cell
//         int x,y,w,h;
//         x = r.left()/* + r.width() - 30*/;//the X coordinate
//         y = r.top();//the Y coordinate
//         w = r.width();//button width
//         h = r.height();//button height
//         button.rect = QRect(x,y,w,h);
//         button.text = "+";
//         button.state = QStyle::State_Enabled;

//         QApplication::style()->drawControl( QStyle::CE_PushButton, &button, painter);
//     }

//     bool editorEvent(QEvent *event, QAbstractItemModel *model, const QStyleOptionViewItem &option, const QModelIndex &index)
//     {
//         if( event->type() == QEvent::MouseButtonRelease )
//         {
//           //  emit addNews();
//             QMouseEvent * e = (QMouseEvent *)event;
//             int clickX = e->x();
//             int clickY = e->y();

//             QRect r = option.rect;//getting the rect of the cell
//             int x,y,w,h;
//             x = r.left();/* + r.width() - 30;*///the X coordinate
//             y = r.top();//the Y coordinate
//             w = r.width()/*30*/;//button width
//             h = r.height()/*30*/;//button height

//             if( clickX > x && clickX < x + w )
//                 if( clickY > y && clickY < y + h )
//                 {
////                     QDialog * d = new QDialog();
////                     d->setGeometry(0,0,100,100);
////                     d->show();
//                       emit send();
//                 }

//         }
//     }


//};

////代理类，把所有单元格中的字符居中显示
//class VIPModel : public QStandardItemModel
//{
//    Q_OBJECT
//signals:
//    void a();

//public:
//    VIPModel(QObject *parent=NULL) : QStandardItemModel(parent) { }
//    VIPModel(int row, int column, QObject *parent=NULL)
//        : QStandardItemModel(row, column, parent) { }
//    QVariant data(const QModelIndex &index, int role = Qt::DisplayRole) const
//    {
//        if( Qt::TextAlignmentRole == role )
//            return Qt::AlignCenter;
//        return QStandardItemModel::data(index, role);
//        emit a();
//    }

//};

////class aa : public QItemDelegate
////{
////    Q_OBJECT
////public:
////    a(QObject *parent = 0): QItemDelegate(parent) { }
////    QWidget *createEditor(QWidget *parent, const QStyleOptionViewItem &option,
////        const QModelIndex &index) const
////    {
////        word_list<<"Java"<<"C++"<<"C#"<<"PHP"<<"Perl"<<"Python"<<"Delphi"<<"Ruby";
//////         QFile *inFile = new QFile ("input.txt");

////       QLineEdit *search_line_edit = new QLineEdit(this);
////       QCompleter completer = new QCompleter(this);
////       QStringListModel string_list_model = new QStringListModel(word_list, this);
////        completer->setCaseSensitivity(Qt::CaseInsensitive);
////        completer->setModel(string_list_model);
////        search_line_edit->setCompleter(completer);
////        connect(search_line_edit, SIGNAL(editingFinished()), this, SLOT(editComplete()));
////    }
////    void setEditorData(QWidget *editor, const QModelIndex &index) const
////    {
////        QString text = index.model()->data(index, Qt::EditRole).toString();
////        QComboBox *comboBox = static_cast<QComboBox*>(editor);
////        int tindex = comboBox->findText(text);
////        comboBox->setCurrentIndex(tindex);
////    }
////    void setModelData(QWidget *editor, QAbstractItemModel *model,
////        const QModelIndex &index) const
////    {
////        QComboBox *comboBox = static_cast<QComboBox*>(editor);
////        QString text = comboBox->currentText();
////        model->setData(index, text, Qt::EditRole);
////    }
////    void updateEditorGeometry(QWidget *editor,
////        const QStyleOptionViewItem &option, const QModelIndex &index) const
////    {
////        editor->setGeometry(option.rect);
////    }
////};

#endif // TEST_H
