 #ifndef __CREATEROBOTPARTS_H
 #define __CREATEROBOTPARTS_H

#include "std_lib_facilities.h"
#include "robotparts.h"
#include "head.h"
#include "torso.h"
#include "arm.h"
#include "locomotor.h"
#include "battery.h"
//INHERITS FROM ROBOTPARTS
 class CreateRobotParts
 {
 private:
 	vector<Head> allHeads;
 	vector<Torso> allTorsos;
 	vector<Arm> allArms;
 	vector<Locomotor> allLocomotors;
 	vector<Battery> allBatteries;
 public:
 	void createHead();
 	void createTorso();
 	void createArm();
 	void createLocomotor();
 	void createBattery();
 	void showHeads();
 	void showTorsos();
 	void showArms();
 	void showLocomotors();
 	void showBatteries();
 	Torso getTorsoAt(int i);
 	Head getHeadAt(int i);
 	Arm getArmAt(int i);
 	Locomotor getLocomotorAt(int i);
 	Battery getBatteryAt(int i);
 	void displayParts();
 	CreateRobotParts(){};
 };

 inline Torso CreateRobotParts::getTorsoAt(int i)
 {
     return allTorsos.at(i);
 }
 inline Head CreateRobotParts::getHeadAt(int i)
 {
     return allHeads.at(i);
 }
 inline Arm CreateRobotParts::getArmAt(int i)
 {
     return allArms.at(i);
 }
 inline Locomotor CreateRobotParts::getLocomotorAt(int i)
 {
     return allLocomotors.at(i);
 }
 inline Battery CreateRobotParts::getBatteryAt(int i)
 {
     return allBatteries.at(i);
 }
 #endif
