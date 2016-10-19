 #ifndef __CREATEROBOTMODELS_H
 #define __CREATEROBOTMODELS_H

#include "createRobotParts.h"
class RobotModels
{
private:
    // this is a structure model that stores all the necessary information for a model
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
 	vector <model> allModel;        // holds all the structure models that is created
 	int armSize;
 	int batterySize;
 	vector<double> partsCost;       // holds individual parts cost
 	double totalPartsCost;
    vector<int> fileIndexes;        // these indexes are store to a file for later use to access data



public:
     RobotModels();
     void createRobotModels(CreateRobotParts&);
     void displayRobotModel();
     double getTotalPartsCost();
     void calculateTotalPartsCost();
     void saveModel();
     void saveProgramModel();
     void retrieveModel(CreateRobotParts &p);
 };
 inline double RobotModels::getTotalPartsCost()
 {
    return totalPartsCost;
 }
 #endif
