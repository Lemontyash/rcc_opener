#include "qml_style.h"
#include <QObject>
#include <fstream>



  int main(int argc, char *argv[])
  {

      QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);


      QGuiApplication app(argc, argv);                                       // create application


      QResource::registerResource("resource.rcc");

       app.setWindowIcon(QIcon(":/moon.ico"));                               // set application icon

       qmlRegisterType<Rcc_class>("com.example.Rcc_class",1,0,"Rcc_class");  // register Rcc_class in QML

      qml_style style;

      qml_style();                                                           // constructor qml_style class


      return app.exec();                                                     // application series

  }

