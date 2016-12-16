/***************************************************************************
**
**  A chinese input method based on Qt 5.x
**  Copyright (C) <2014> <xinh>
**
****************************************************************************/
#include <QtCore>
#include <QMessageBox>

#include "pinyininputmethod.h"
#include "mockupinputcontext.h"
//---------------------------------------------------------------------------
CPinyinInputMethod::CPinyinInputMethod()
{
    HanziModel.clear();
    QDateTime dt = QDateTime::currentDateTime();
    QSettings setter(":/pinyin/pinyinEx.ini", QSettings::IniFormat);

    key = setter.value("pyKey", key).toStringList();
    val = setter.value("pyVal", val).toStringList();
    if (key.size() <= 1)
    {
        QMessageBox::warning( 0, tr("pinyin"), tr("Can't load!") );
        return;
    }
    qDebug() << "time: " << -QDateTime::currentDateTime().msecsTo(dt);
    qDebug() << key[key.size()-1] << " : " << val[val.size()-1];
}

//---------------------------------------------------------------------------
CPinyinInputMethod::~CPinyinInputMethod()
{
    key.clear();
    val.clear();
    HanziModel.clear();
}

int CPinyinInputMethod::BinarySearch(const QString &gemfield)
{
    int min = 0;
    int max = key.size();
    int idx = max / 2;

    while (true)
    {
        if (key[idx].startsWith(gemfield))
            break;
        if (max == min + 1 || max <= min || max == idx + 1 || max == idx || min == idx + 1 || min == idx )
            return -1;
        if (key[idx] > gemfield)
            max = idx;
        else
            min = idx;
        idx = (max + min) / 2;
    }
    do{
        if (--idx < 0)
            break;
    }while(key[idx].startsWith(gemfield));
    return ++idx;
}

//---------------------------------------------------------------------------
void CPinyinInputMethod::Matching(const QString &gemfield )
{
    HanziModel.clear();
    QString str = gemfield.toLower();
    int idx = BinarySearch(str);
    if (idx != -1)
    {
        while(true)
        {
            if (idx >= key.size())
                break;
            if (key[idx].startsWith(gemfield))
                HanziModel.append(val[idx]);
            else
                break;
            idx++;
        }
    }
    Update();
}

void CPinyinInputMethod::Update()
{
    MockupInputContext::d->view->engine()->rootContext()->setContextProperty("hanziModel", HanziModel);
}

//---------------------------------------------------------------------------
