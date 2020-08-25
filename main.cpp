#include "qml_style.h"
#include <fstream>


  int main(int argc, char *argv[])
  {
      /*qobject_cast<T>*/

      QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
      QResource::registerResource("/path/to/resource.rcc");

      QGuiApplication app(argc, argv);



      qml_Style style;

      style.qml_style();


      return app.exec();

  }

