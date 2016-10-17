#include "std_lib_facilities.h"
#include "robotModels.h"

RobotModels::RobotModels()
{
    // these are the default values if it is not changed
    int armSize = 0;
 	int batterySize = 0;
 	double totalPartsCost = 0;
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
        if (p.getSizeOfHead() != 0)
        {
            index = readInput();
            mdl.head = p.getHeadAt(index);
            mdl.batteries.push_back(0);             // push_back(0) because head doesn't need a battery
            partsCost.push_back(p.getHeadAt(index).getCost());
        }
    }
    else
        cout << "Okay..." << endl;

    cout << "\nDo you need arm(s) for robot model (y/n)? ";
    cin >> ch;
    if (ch == 'y' || ch == 'Y')
    {
        int counter = 2;
        p.showArms();
        if (p.getSizeOfArm() != 0)
        {
            cout << "You can select a maximum of 2 arms " << endl;
            do{
                index = readInput();
                while (index < 0 || index > p.getSizeOfArm())
                {
                    cout << index << " is out of range.\nTry again...\n" << endl;
                    p.showArms();
                    cout << "You can select a maximum of 2 arms " << endl;
                    index = readInput();
                }
                mdl.arms.push_back(p.getArmAt(index));
                partsCost.push_back(p.getArmAt(index).getCost());
                counter--;
            }while(counter > 0 && counter < 2);
            mdl.batteries.push_back(0);
        }
    }
    else
        cout << "Okay..." << endl;

    cout << "\nDo you need a Torso for robot model (y/n)? ";
    cin >> ch;
    if (ch == 'y' || ch == 'Y')
    {
        p.showTorsos();
        if (p.getSizeOfTorso() != 0)
        {
            index = readInput();
            mdl.batteries.push_back(p.getTorsoAt(index).getBatteryCompartments());   // this is the number of batteries that can fit in torso
            mdl.torso = p.getTorsoAt(index);
            partsCost.push_back(p.getTorsoAt(index).getCost());
        }

    }
    else
        cout << "Okay..." << endl;

    cout << "\nDo you need a Locomotor for robot model (y/n)? ";
    cin >> ch;
    if (ch == 'y' || ch == 'Y')
    {
        p.showLocomotors();
        if (p.getSizeOfLocomotor() != 0)
        {
            index = readInput();
            mdl.locomotor = p.getLocomotorAt(index);
            mdl.batteries.push_back(0);
            partsCost.push_back(p.getLocomotorAt(index).getCost());
        }
    }
    else
        cout << "Okay..." << endl;

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
    calculateTotalPartsCost();
    cout << "\nThe total cost of all components for model " << mdl.modelName << " is " << totalPartsCost << "." << endl;
    cout << "What price would you like to sell " << mdl.modelName << " for? ";
    cin >> mdl.modelPrice;
    if(mdl.modelPrice < totalPartsCost)
    {
        cout << "\nWARNING! " << "You will NOT make any profit if you set " << mdl.modelName << " price to $" << mdl.modelPrice << endl;
        cout << "Are you sure that's what you want to set model price to (y/n): ";
        cin >> ch;
        if (ch == 'n' || ch == 'N')
        {
            cout << "\nWhat price would you like to sell " << mdl.modelName << " for? ";
            cin >> mdl.modelPrice;
        }
    }
    allModel.push_back(mdl);
    armSize = mdl.arms.size();
    batterySize = mdl.batteries.size();
}
void RobotModels::calculateTotalPartsCost()
{
    totalPartsCost = 0;                        // ensure totalPartsCost is zero before start adding
    for(int i = 0; i < partsCost.size(); i++)
        totalPartsCost += partsCost[i];
    while (partsCost.size() != 0) // delete all elements that was in partsCost, so partsCost can store next model cost
        partsCost.pop_back();
}
void RobotModels::displayRobotModel()
{
    cout << endl;
    cout << "_____________________________________________" << endl;
    cout << "\t******** Display Models ********" << endl;
    cout << "_____________________________________________" << endl;
    for (int i = 0; i < allModel.size(); i++)
    {
        cout << endl;
        cout << "Model Name: " << allModel[i].modelName << endl;
        cout << "Model Number: " << allModel[i].modelNumber << endl;
        cout << "Types of components that made up model " << allModel[i].modelName << endl;
        cout << "\tHead: " << allModel[i].head.getName() << endl;
        if (armSize == 0)
            cout << "Arms: None " << endl;
        else
            for (int j = 0; j < armSize; j++)
                cout << "\tArms: " << allModel[i].arms[j].getName() << endl;
        cout << "\tTorso: " << allModel[i].torso.getName() << endl;
        cout << "\tLocomotor: " << allModel[i].locomotor.getName() << endl;
        if (batterySize != 0)
            cout << "\tBatteries: " << allModel[i].batteries[i] << endl;
        else
            cout << "\tBatteries: None" << endl;
        cout << "Model Price: $" << allModel[i].modelPrice << endl;
    }
    if (allModel.size() == 0)
        cout << "\nNo model created" << endl;
}
