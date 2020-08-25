#ifndef RCC_CLASS_H
#define RCC_CLASS_H
#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>
#include <QQmlApplicationEngine>
#include <QResource>
#include <QObject>
#include <QVariant>
#include <stdio.h>
#include <stdlib.h>
#include <fstream>








class Rcc_class : public QObject
{

    Q_OBJECT

  public:
    Rcc_class();

    Rcc_class(QObject *QMLObject) : viewer(QMLObject) {}

    QObject *viewer;



   signals:





   public slots:
    void mySlot(const QString& in);




};

#endif // RCC_CLASS_H
