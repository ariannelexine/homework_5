#include "std_lib_facilities.h"
#include "controller.h"
#include "view.h"


//USED TO CONTROL PARTS
void Controller::partsController(){
	double cmd = 0;
	View view;
	while (cmd != 1.6){
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
		else if(cmd == 1.6)
			cout << "returning to main menu...\n";
		else
			cout <<"\nXXXXX Invalid key XXXXX"<<endl;
	}
}
void Controller::modelController(){
	double cmd = 0;
	int readKey;
	View view;

    model mdl;

    cin.ignore();
    cout << "\nModel Name: ";
    getline(cin, mdl.modelName);
    cout << "Model Number: ";
    cin >> mdl.modelNumber;

	while (cmd != 2.6){
		view.createModels_menu();
		cin >> cmd;
		if(cmd == 2.1){
            cout << "Here is a list of Robot Heads: " << endl;
			parts.showHeads();
            cout << "Select: ";
            cin >> readKey;
            mdl.head = parts.getHeadAt(readKey);
            allModel.push_back(mdl);
		}
		else if(cmd == 2.2)
        {
            cout << "Here is a list of the Torso: " << endl;
            parts.showTorsos();
            cout << "Select: ";
            cin >> readKey;
            mdl.torso = parts.getTorsoAt(readKey);
            allModel.push_back(mdl);
        }

		else if(cmd == 2.3)
        {
            cout << "Here is a list of the Arms: " << endl;
            parts.showArms();
            cout << "How many arms do you need (maximum, 2): ";
            cin >> readKey;
            for(int i = 0; i < readKey; i++)
            {
                cout << "Select: ";
                cin >> readKey;
                mdl.arms[i] = parts.getArmAt(readKey);
            }
            allModel.push_back(mdl);
        }
		else if(cmd == 2.4)
        {
            cout << "Here is a list of the Locomotors: " << endl;
            parts.showLocomotors();
            cout << "Select: ";
            cin >> readKey;
            mdl.locomotor = parts.getLocomotorAt(readKey);
            allModel.push_back(mdl);
        }
		else if(cmd == 2.5)
        {
            cout << "Here is a list of the Batteries: " << endl;
			parts.showBatteries();
            cout << "Select: ";
            cin >> readKey;
            mdl.batteries.push_back(parts.getBatteryAt(readKey));
            allModel.push_back(mdl);
        }
		else if(cmd == 2.6)
			cout << "returning to main menu...\n";
		else
			cout <<"\nXXXXX Invalid key XXXXX"<<endl;
        cout << "Do you need any other parts to create robot model (y/n): ";
        char ch;
        cin >> ch;
        if (ch == 'n' || ch == 'N')
          break;
	}
	displayRobotModel(allModel);
}
void Controller::displayRobotModel(vector <model> allModel)
{
    cout << "\nRobot Models\n" << endl;
    cout << "This is the size of Robot Model: " << allModel.size() << endl;
    for (int i = 0; i < allModel.size(); i++)
    {
        allModel[i].torso.displayTorso(cout, allModel[i].torso);
        //cout << allModel[i].torso.getName() << endl;
    }
}
