#include "qml_style.h"

qml_style::qml_style()
{

    engine.addImportPath("qrc:/");             // import resource

    engine.load(QUrl("qrc:/main.qml"));        // loading qml file

}









