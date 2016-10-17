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
 	    vector<int> batteries;
 	};
 	vector <model> allModel;
 	int armSize;
 	int batterySize;
 	vector<double> partsCost;
 	double totalPartsCost;

public:
     RobotModels();
     void createRobotModels(CreateRobotParts&);
     void displayRobotModel();
     double getTotalPartsCost();
     void calculateTotalPartsCost();

 };
 inline double RobotModels::getTotalPartsCost()
 {
    return totalPartsCost;
 }
 #endif
