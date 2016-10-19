#include "std_lib_facilities.h"
#include "controller.h"
#include "view.h"
#include <fstream>

void Controller::showControllerMenu()
{
    View newView;
    int key = 0;

    parts.retrieveParts();          // retrieve data that is store in file
    model.retrieveModel(parts);     // retrieve data that is store in file
                                    // retrieveModel needs to see the data of parts in order to retrieve the data
    while (true)
    {
        newView.main_menu();
        cin >> key;
        switch (key)
        {
            case 1:
                partsController();
            break;
            case 2:
                modelController();
            break;
            case 3:
                parts.displayParts();
            break;
            case 4:
                model.displayRobotModel();
            break;
            case 5:
                parts.saveParts();
                parts.saveProgramParts();
                model.saveModel();
                model.saveProgramModel();
                cout << "Robot parts and robot model have been saved. " << endl;
            break;
            case 6:
                cout << "exiting..." << endl;
                exit(0);
            break;
            case 7:
                newView.print_documentation();
            break;
            default:
                cout << "You didnt enter a valid command. Please try again..." << endl;
        }
    }
}
//USED TO CONTROL PARTS
void Controller::partsController(){
	double cmd = 0;
	View view;
	while (cmd != 1.7){
		view.createParts_menu();
		cin >> cmd;
		if(cmd == 1.1)
			parts.createHead();
		else if(cmd == 1.2)
			parts.createTorso();
		else if(cmd == 1.3)
			parts.createArm();
		else if(cmd == 1.4)
			parts.createLocomotor();
		else if(cmd == 1.5)
			parts.createBattery();
        else if (cmd  == 1.6)
            parts.displayParts();
		else if(cmd == 1.7)
			cout << "returning to main menu...\n";
		else
			cout <<"\nXXXXX Invalid key XXXXX"<<endl;
	}
}
void Controller::modelController(){

	double cmd = 0;
	int readKey;
	View view;

    model.createRobotModels(parts);

}


