#include "mapcontroller.h"

#include <QGraphicsScene>


mapController::mapController()
{
    // create a scene
    scene = new QGraphicsScene(this);
    scene->setSceneRect(0,0,800,600);

    // set the scene
    setScene(scene);

    // alter window
    setFixedSize(800,600);
    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
}

void mapController::mousePressEvent(QMouseEvent *event)
{
  //if left arrow
  //  uav->rotate
}

void mapController::addUavToScene( uavObject* uav )
{
  uav->setPos(250,250);

  // add the tower to scene
  scene->addItem(uav);
}

void mapController::setPrimaryUav( uavObject* uav )
{
  this->uav = uav;
}
