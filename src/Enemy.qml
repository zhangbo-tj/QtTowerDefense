// Lab 3
import QtQuick 2.0

Rectangle
{
    id: enemy
    property alias properties: enemy

    visible: false
    width: 25
    height: 25
    radius: width * .5
    color: "red"
    x: -20
    y: 250

    Rectangle
    {
        id: helathBar
        visible: true
        width: 30
        height: 5
        color: "green"
        anchors.bottom: enemy.top
        anchors.bottomMargin: 5
    }

    PathAnimation
    {
        id:path
        property alias pathAnimation: path
        target: enemy
        running: false
        duration: 28000
        path: Path
        {
            startX: 0
            startY: 250
            PathLine{x: 620; y: 250}
        }
    }
}


