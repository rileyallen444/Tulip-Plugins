#ifndef QTSCRIPTSHELL_QDOUBLEPROPERTY_H
#define QTSCRIPTSHELL_QDOUBLEPROPERTY_H

#include <QDoubleProperty.h>

#include <QtScript/qscriptvalue.h>

class QtScriptShell_QDoubleProperty : public QDoubleProperty
{
public:
    QtScriptShell_QDoubleProperty(const QGraph*  g);
    ~QtScriptShell_QDoubleProperty();

    void childEvent(QChildEvent*  arg__1);
    void customEvent(QEvent*  arg__1);
    bool  event(QEvent*  arg__1);
    bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
    void timerEvent(QTimerEvent*  arg__1);

    QScriptValue __qtscript_self;
};

#endif // QTSCRIPTSHELL_QDOUBLEPROPERTY_H
