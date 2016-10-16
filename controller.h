 #ifndef __CONTROLLER_H
 #define __CONTROLLER_H


#include "std_lib_facilities.h"
//#include "view.h"
#include "robotparts.h"
#include "createRobotParts.h"
#include "robotModels.h"
#include "torso.h"
#include "head.h"
#include "arm.h"
#include "locomotor.h"
#include "battery.h"

 class Controller
 {
 private:
 	CreateRobotParts& parts;
 	RobotModels model;
 public:
 	Controller (CreateRobotParts& constructorOf) : parts(constructorOf){};
 	void partsController();
 	void modelController();

    //friend ostream &operator<<(ostream &output, const Torso &t);
 };
 #endif
