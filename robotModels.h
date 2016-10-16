 #ifndef __CREATEROBOTMODELS_H
 #define __CREATEROBOTMODELS_H

#include "createRobotParts.h"
 class RobotModels
{
private:
	string modelName;
	int modelNumber;
	double modelPrice;
	vector<RobotModels> robotModels;
	//CreateRobotParts& robotPartsAddress;
public:
     void createRobotModels();
     //RobotModels(CreateRobotParts & r) : robotPartsAddress(r) {};
 };
 #endif
