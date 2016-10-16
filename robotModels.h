 #ifndef __CREATEROBOTMODELS_H
 #define __CREATEROBOTMODELS_H

#include "createRobotParts.h"
 class RobotModels
{
private:
	struct model
 	{
 	    string modelName;
 	    string modelNumber;
 	    double modelPrice;
 	    Torso torso;
 	    Locomotor locomotor;
 	    Head head;
 	    vector<Arm> arms;
 	    vector<Battery> batteries;
 	};
 	vector <model> allModel;
 	int armSize;
 	int batterySize;

public:
     RobotModels();
     void createRobotModels(CreateRobotParts&);
     void displayRobotModel();

 };
 #endif
