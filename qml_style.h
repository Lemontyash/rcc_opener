#include "rcc_class.h"
#ifndef QML_STYLE_H
#define QML_STYLE_H





class qml_Style
{

    public:

  QQmlApplicationEngine engine;


   Rcc_class file_obj;

  file_obj.mySlot(nullptr);

  int qml_style()
  {

      engine.addImportPath("qrc:/");
      engine.load(QUrl(QStringLiteral("qrc:/main.qml")));


      QObject* root = engine.rootObjects()[0];

      Rcc_class rcc_class(root);



      engine.rootContext()->setContextProperty("_rcc_class", &rcc_class);



      engine.rootContext()->setContextProperty("error_indicator","normal");





      FILE *rcc;

       rcc = fopen("test","r+");



      if (rcc != nullptr){



          engine.rootContext()->setContextProperty("error_indicator","нормальное");

          engine.rootContext()->setContextProperty("color_normal","#97df3a");



      }
      if(rcc == nullptr){

       //   rcc = fopen(file_name,"w+");

          engine.rootContext()->setContextProperty("error_indicator","ошибка файл не найден");

          engine.rootContext()->setContextProperty("color_normal","#ff341a");

      }




      if (engine.rootObjects().isEmpty())
          return -1;



      return 0;
  }

};
#endif // QML_STYLE_H
