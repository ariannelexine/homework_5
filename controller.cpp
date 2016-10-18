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
                ordersController();
            break;
            case 6:
                cout << "you selected save" << endl;
            break;
            case 7:
                cout << "exiting..." << endl;
                exit(0);
            break;
            case 8:
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
    //model.displayRobotModel();

}
void Controller::ordersController()
{
    View newView;
    int key = 0;
    
    while( key != 3)
    {
        newView.userSelection();
        cin >> key;
        if( key == 1 )
        {
            newView.salesOrderOptions();
            //Arianne's code to continue using the sales order menu
            break;
        }
        else if( key == 2 )
        {
            newView.customerOrderOptions();
            //Arianne's code to continue using the customer order menu
            break;
        }
        else if( key == 3 )
            cout << "retruning to main menu...\n";
        else
            cout << "\nXXXXX Invalid key, Try again XXXXX" << endl;
    }
}
