#ifndef RCC_CLASS_H
#define RCC_CLASS_H
#include <QQuickView>
#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>
#include <QResource>
#include <QObject>
#include <QDebug>








class Rcc_class : public QObject
{

    Q_OBJECT

    QQmlApplicationEngine engine;

   public:

       Q_INVOKABLE QString window_function(QString resource);

     /*  Q_INVOKABLE void window_close_function(QString resource){

                          QResource::unregisterResource(resource);

                   }*/

   signals:

   private slots:

   private:

   protected:




};

#endif // RCC_CLASS_H

