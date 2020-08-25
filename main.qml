import QtQuick 2.9
import QtQuick.Window 2.2
import QtQuick.Controls 2.2
import QtQuick.Controls.Styles 1.4
import QtQuick.Layouts 1.3
import "script.js" as Script





Window {
    id:window
    objectName: window
    visible: true
    width: 640
    height: 480
    title: qsTr("rcc Opener")
    color:"#2f0971"





    Row {
        id: row
        x: 368
        y: 384
        width: window.width * 0.3
        height: 48
        anchors.right: parent.right
        anchors.rightMargin: 80
        anchors.bottom: parent.bottom
        anchors.bottomMargin: 48
        spacing: 50

        Button {
            id: buttonOk
            objectName: buttonOk
            width: window.width * 0.15
            height: window.height * 0.1
            text: qsTr("OK")
            display: AbstractButton.TextOnly

            background: Rectangle {

                radius: 3
            }

            onClicked: {



            }

        }

        Button {
            id: buttonCancel
            x: 130
            width: window.width * 0.15
            height: window.height * 0.1
            text: qsTr("cancel")

            background: Rectangle {

                radius: 3
            }

            onClicked: {

                window.close();

            }

        }
    }

    Text {
        id: element
        y: 288
        height: 28
        color: color_normal
        text: "Состояние: " + error_indicator
        anchors.right: row.left
        anchors.rightMargin: -242
        anchors.left: row.right
        anchors.leftMargin: -192
        anchors.bottom: row.top
        anchors.bottomMargin: 68
        styleColor: "#ffffff"
        font.pixelSize: 14
    }

    Text {
        id: element1
        color: "#fff3f3"
        text: qsTr("Введите путь к файлу:")
        anchors.top: parent.top
        anchors.topMargin: 185
        anchors.left: parent.left
        anchors.leftMargin: 50
        font.pixelSize:  window.width * 0.02
    }

    TextInput {
        id: fileinput
        objectName: fileinput
        width: 554
        color: "#ffffff"
        text: "file.rcc"
        anchors.left: element.left
        anchors.leftMargin: -324
        anchors.bottom: element.top
        anchors.bottomMargin: 25
        font.family: "Tahoma"
        anchors.horizontalCenterOffset: 1
        anchors.horizontalCenter: parent.horizontalCenter
        anchors.top: element1.bottom
        anchors.topMargin: 14
        font.pixelSize: Script.fixlen(fileinput.length,parent);

        opacity: 0.9
        horizontalAlignment: Text.AlignHCenter
        transformOrigin: Item.Center
        topPadding: 8
        maximumLength: 50
        selectionColor: "#ffffff"

        autoScroll: false



    }

    Text {
        id: element2
        objectName: element2
        x: 138
        y: 364
        width: 109
        height: 25
        color: "#ffffff"
        text: qsTr("Test")
        font.pixelSize: 18
    }






}

















































































































































































































































/*##^## Designer {
    D{i:3;anchors_height:100;anchors_width:100;anchors_x:126;anchors_y:195}D{i:2;anchors_height:34;anchors_width:220;anchors_x:370;anchors_y:404}
D{i:5;anchors_width:122;anchors_x:141;anchors_y:329}D{i:4;anchors_height:70;anchors_width:100;anchors_x:499;anchors_y:196}
D{i:1;anchors_height:48;anchors_width:220;anchors_x:370;anchors_y:384}D{i:6;anchors_height:28;anchors_width:242;anchors_x:368;anchors_y:288}
D{i:7;anchors_x:49;anchors_y:166}D{i:8;anchors_height:43;anchors_width:488;anchors_x:74;anchors_y:230}
}
 ##^##*/
