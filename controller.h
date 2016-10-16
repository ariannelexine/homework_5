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
    //static size_t counterRobotModel;        // size_t is simply a positive integer
 public:
 	Controller (CreateRobotParts& constructorOf) : parts(constructorOf){};
 	void partsController();
 	void modelController();

    struct model
 	{
 	    string modelName;
 	    string modelNumber;
 	    double price;
 	    Torso torso;
 	    Locomotor locomotor;
 	    Head head;
 	    Arm arms[2];
 	    vector<Battery> batteries;
 	};
 	vector <model> allModel;
    void displayRobotModel(const vector <model> allModel);
    //friend ostream &operator<<(ostream &output, const Torso &t);
 };
 #endif
