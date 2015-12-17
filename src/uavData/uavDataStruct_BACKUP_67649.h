/*
 * uavDataStruct.h
 *
 *  Created on: Dec 13, 2015
 *      Author: David
 */

#ifndef UAVDATASTRUCT_H_
#define UAVDATASTRUCT_H_

#include "../uavController/MissionModes.h"
#include "string.h"

struct uavData
{
  int refreshRate;
  int shipAngle;
  int mBrakeCount;
  double Dx;
  double Dy;
  double Ax;
  double Ay;
  double width;
  double height;
  bool return_to_base;
  bool night_vision_enabled;
  int uav_id;
  int missile_inventory;
<<<<<<< Updated upstream
  int current_pic_count;
=======
  int direction;
  //Auto = 1 Man = 2
  int operator_mode;
>>>>>>> Stashed changes
  bool initialized;
  bool perform_mission;
  uavMissionModes::uavMissionTypesEnum mission_type;


  uavData()
  {
    initialize();
  }

  ~uavData() {}

  void initialize()
  {
    memset( this, 0,sizeof(*this) );
    missile_inventory = 5;
    mission_type = uavMissionModes::NO_MISSION;
  }

};


#endif /* UAVDATASTRUCT_H_ */