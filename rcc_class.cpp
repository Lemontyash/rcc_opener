#include "rcc_class.h"

// window function

QString Rcc_class::window_function(QString resource){

     QResource::unregisterResource("resource.rcc");


       bool res = QResource::registerResource(resource);                           // register resource


    if(res == true){

        QString qml = "qrc:/main.qml";

         engine.load(QUrl(qml));

       return "нормальное";                                                        // status indicator for "element"

    }
    else{

       return resource + " - ошибка файл не найден ,или не соответствует формату"; // status indicator for "element"

    }

}








