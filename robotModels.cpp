#include "std_lib_facilities.h"
#include "robotModels.h"

RobotModels::RobotModels()
{
}
int readInput()
{
    int index;

	cout << "\nSelect: ";
	cin >> index;
	return index;
}
void RobotModels::createRobotModels(CreateRobotParts &p){

    model mdl;
    int index;
    char ch;

    cin.ignore();
    cout << endl;
	cout <<"What is your Model Name?: ";
	getline(cin, mdl.modelName);
	cout <<"What is your Model Number?: ";
	cin >> mdl.modelNumber;
	cin.ignore();

    cout << "\nDo you need a head for robot model (y/n)? ";
    cin >> ch;
    if (ch == 'y' || ch == 'Y')
    {
        p.showHeads();
        index = readInput();
        mdl.head = p.getHeadAt(index);
    }
    else
        cout << "Okay...\n" << endl;

    cout << "\nDo you need arm(s) for robot model (y/n)? ";
    cin >> ch;
    if (ch == 'y' || ch == 'Y')
    {
        cout << "You can select a maximum of 2 arms " << endl;
        p.showArms();
        do{
            index = readInput();
            if (index <= 0 || index > 2)
                break;
            mdl.arms.push_back(p.getArmAt(index));
            index--;
        }while(index > 0 && index <= 2);
    }
    else
        cout << "Okay...\n" << endl;

    cout << "\nDo you need a Torso for robot model (y/n)? ";
    cin >> ch;
    if (ch == 'y' || ch == 'Y')
    {
        p.showTorsos();
        index = readInput();
        //mdl.batteries.push_back(p.getBatteryAt(index));          // this is the of batteries that can fit in torso
        mdl.torso = p.getTorsoAt(index);
    }
    else
        cout << "Okay...\n" << endl;

    cout << "\nDo you need a Locomotor for robot model (y/n)? ";
    cin >> ch;
    if (ch == 'y' || ch == 'Y')
    {
        p.showLocomotors();
        index = readInput();
        mdl.locomotor = p.getLocomotorAt(index);
    }
    else
        cout << "Okay...\n" << endl;

/*
    cout << "Do you need battery for robot model? ";
    cin >> ch;
    if (ch == 'y' || ch == 'Y')
    {
        p.showBatteries();
        index = readInput();
        mdl.batteries = p.getBatteryAt(index);
    }
    else
        cout << "Okay...\n" << endl;
*/
	allModel.push_back(mdl);
	armSize = mdl.arms.size();
	batterySize = mdl.batteries.size();
}
void RobotModels::displayRobotModel()
{
    for (int i = 0; i < allModel.size(); i++)
    {
        cout << "Model Name: " << allModel[i].modelName << endl;
        cout << "Model Number: " << allModel[i].modelNumber << endl;
        cout << "Types of components that made up model " << allModel[i].modelName << endl;
        cout << "\t" << allModel[i].head.getName() << endl;
        for (int j = 0; j < armSize; i++)
            cout << "\t" << allModel[i].arms[j].getName() << endl;
        cout << "\t" << allModel[i].torso.getName() << endl;
        cout << "\t" << allModel[i].locomotor.getName() << endl;
      //  for (int j = 0; j < batterySize; i++)
           // cout << "\t" << allModel[i].batteries.getName() << endl;
    }
}
