#include "std_lib_facilities.h"
#include "controller.h"
#include "view.h"

void Controller::showControllerMenu()
{
    View newView;
    int key = 0;

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
                cout << "you selected save" << endl;
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
/*
    while( key != 4 )
    {
        newView.main_menu();
        cin >> key;

        //test conditions for user input
        if(key == 1){
            controller.partsController();
        }

        else if( key == 2 )
        {
           controller.modelController();
        }
        else if( key == 3 )
            cout << "you selected save" << endl;
        else if( key == 4 )
            cout << "exiting..." << endl;
        else if( key == 5 )
            newView.print_documentation();
        else                                //user error, change to throw exception
            cout << "You didnt enter a valid command. Please try again..." << endl;
    }
*/

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
    //model.displayRobotModel();

    /*
	while (cmd != 2.6){
		view.createModels_menu();
		cin >> cmd;
		if(cmd == 2.1){
        cout << "Here is a list of Robot Heads: " << endl;
        parts.showHeads();
        cout << "Select: ";
        cin >> readKey;
        //mdl.head = parts.getHeadAt(readKey);
        //allModel.push_back(mdl);
		}
		else if(cmd == 2.2)
        {
            cout << "Here is a list of the Torso: " << endl;
            parts.showTorsos();
            cout << "Select: ";
            cin >> readKey;
           // mdl.torso = parts.getTorsoAt(readKey);
            //allModel.push_back(mdl);
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
               // mdl.arms[i] = parts.getArmAt(readKey);
            }
            //allModel.push_back(mdl);
        }
		else if(cmd == 2.4)
        {
            cout << "Here is a list of the Locomotors: " << endl;
            parts.showLocomotors();
            cout << "Select: ";
            cin >> readKey;
            //mdl.locomotor = parts.getLocomotorAt(readKey);
            //allModel.push_back(mdl);
        }
		else if(cmd == 2.5)
        {
            cout << "Here is a list of the Batteries: " << endl;
			parts.showBatteries();
            cout << "Select: ";
            cin >> readKey;
            //mdl.batteries.push_back(parts.getBatteryAt(readKey));
            //allModel.push_back(mdl);
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
*/

}
/*
void Controller::displayRobotModel(vector <model> allModel)
{
    cout << "\nRobot Models\n" << endl;
    //cout << "This is the size of Robot Model: " << allModel.size() << endl;
    //for (int i = 0; i < allModel.size(); i++)
    //{
       // allModel[i].torso.displayTorso(cout, allModel[i].torso);
        //cout << allModel[i].torso.getName() << endl;
    //}
}
*/
