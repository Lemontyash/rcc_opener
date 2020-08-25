#include "rcc_class.h"


void Rcc_class::mySlot(const QString&){


    QObject* fileinput = viewer->findChild<QObject*>("fileinput");

    QObject* element2 = viewer->findChild<QObject*>("element2");

    QString file_resource = (fileinput->property("text").toString());



    element2->setProperty("text",file_resource);





}

