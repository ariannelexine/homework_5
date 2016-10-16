#include "std_lib_facilities.h"
#include "createRobotParts.h"

/*THESE ARE USED TO CREATE PARTS FOR THE ROBOT AND ARE STORED IN VECTOR OF CLASSES*/
void CreateRobotParts::createHead()
{
	string name, type, description;
	int partNumber;
	double weight, cost;

	cin.ignore();
	cout <<"******* CREATING HEAD **********\n";
	cout << "Name?: ";
	getline(cin, name);
	cout<< "Part Number?: ";
	cin >> partNumber;
	cin.ignore();
	//cout <<"Type?: ";
	//getline(cin, type);
	type = "Head";
	cout<<"Weight?: ";
	cin >> weight;
	cin.ignore();
	cout <<"Cost?: ";
	cin >> cost;
	cin.ignore();
	cout <<"Descritpion?: ";
	getline(cin, description);
	//PUT ALL THESE ANSWERS INTO THE VECTOR allHeads.
	Head h(name, partNumber, type, weight, cost, description);
	allHeads.push_back(h);

}
void CreateRobotParts::createTorso(){
	string name, type, description;
	int partNumber, batteries;
	double weight, cost;

	cin.ignore();
	cout <<"******* CREATING TORSO **********\n";
	cout << "Name?: ";
	getline(cin, name);
	cout<< "Part Number?: ";
	cin >> partNumber;
	cin.ignore();
	//cout <<"Type?: ";
	//getline(cin, type);
	type = "Torso";
	cout<<"Weight?: ";
	cin >> weight;
	cin.ignore();
	cout <<"Cost?: ";
	cin >> cost;
	cin.ignore();
	cout <<"Descritpion?: ";
	getline(cin, description);
	cout <<"How many battery compartment(s) does torso have (1, 2, or 3)?: ";
	cin >> batteries;
	while(batteries < 1 || batteries > 3)
    {
        cout << batteries << " is out of range!" << endl;
        cout <<"How many battery compartment(s) does torso have (1, 2, or 3)?: ";
	    cin >> batteries;
    }
	cin.ignore();
	Torso t(name, partNumber, type, weight, cost, description, batteries);
	allTorsos.push_back(t);
}
void CreateRobotParts::createArm(){
	string name, type, description;
	int partNumber;
	double weight, cost, powerConsumed;
	cin.ignore();
	cout <<"******* CREATING Arm **********\n";
	cout << "Name?: ";
	getline(cin, name);
	cout<< "Part Number?: ";
	cin >> partNumber;
	cin.ignore();
	//cout <<"Type?: ";
	//getline(cin, type);
	type = "Arm";
	cout<<"Weight?: ";
	cin >> weight;
	cin.ignore();
	cout <<"Cost?: ";
	cin >> cost;
	cin.ignore();
	cout <<"Descritpion?: ";
	getline(cin, description);
	cout <<"Power consumed?: ";
	cin >> powerConsumed;
	cin.ignore();
	Arm a(name, partNumber, type, weight, cost, description, powerConsumed);
	allArms.push_back(a);
}
void CreateRobotParts::createLocomotor(){
	string name, type, description;
	int partNumber, maxSpeed;
	double weight, cost, powerConsumed;
	cin.ignore();
	cout <<"******* CREATING LOCOMOTOR **********\n";
	cout << "Name?: ";
	getline(cin, name);
	cout<< "Part Number?: ";
	cin >> partNumber;
	//cout <<"Type?: ";
	//getline(cin, type);
	type = "Locomotor";
	cout<<"Weight?: ";
	cin >> weight;
	cin.ignore();
	cout <<"Cost?: ";
	cin >> cost;
	cin.ignore();
	cout <<"Descritpion?: ";
	getline(cin, description);
	cout <<"Power Consumed?: ";
	cin >> powerConsumed;
	cin.ignore();
	cout <<"Max Speed?: ";
	cin >> maxSpeed;
	cin.ignore();
	Locomotor l(name, partNumber, type, weight, cost, description, powerConsumed, maxSpeed);
	allLocomotors.push_back(l);
}
void CreateRobotParts::createBattery(){
	string name, type, description;
	int partNumber, maxSpeed;
	double weight, cost, energyContained;
	cin.ignore();
	cout <<"******* CREATING BATTERY **********\n";
	cout << "Name?: ";
	getline(cin, name);
	cout<< "Part Number?: ";
	cin >> partNumber;
	cin.ignore();
	//cout <<"Type?: ";
	//getline(cin, type);
	type = "Battery";
	cout<<"Weight?: ";
	cin >> weight;
	cin.ignore();
	cout <<"Cost?: ";
	cin >> cost;
	cin.ignore();
	cout <<"Descritpion?: ";
	getline(cin, description);
	cout <<"Energy Contained?: ";
	cin >> energyContained;
	cin.ignore();
	Battery b(name, partNumber, type, weight, cost, description, energyContained);
	allBatteries.push_back(b);
}

//TO ACCESS THE HEADS IN THE VECTOR ALLHEADS USES THE DIFFERENT GETTER FUNCTIONS EXAMPLE BELOW
//cout << allHeads.at(0).getWeight();
void CreateRobotParts::showHeads(){
 		if(allHeads.size() == 0){
 			cout << "No available heads.\n";
 		}
 		else{
 			int i;
 			for(i=0; i < allHeads.size(); i++)
 				cout <<i<<") "<< allHeads.at(i).getName()<<endl;
 		}
 	}
 	void CreateRobotParts::showTorsos(){
 		if(allTorsos.size() == 0){
 			cout << "No available torsos.\n";
 		}
 		else{
 			int i;
 			for(i=0; i < allTorsos.size(); i++)
 				cout <<i<<") "<< allTorsos.at(i).getName()<<endl;
 		}
 	}
 	void CreateRobotParts::showArms(){
 		if(allArms.size() == 0){
 			cout << "No available arms.\n";
 		}
 		else{
 			int i;
 			for(i=0; i < allArms.size(); i++)
 				cout <<i<<") "<<allArms.at(i).getName()<<endl;
 		}
 	}
 	void CreateRobotParts::showLocomotors(){
 		if(allLocomotors.size() == 0){
 			cout << "No available locomotors.\n";
 		}
 		else{
 			int i;
 			for(i=0; i < allLocomotors.size(); i++)
 				cout <<i<<") "<<allLocomotors.at(i).getName()<<endl;
 		}
 	}
 	void CreateRobotParts::showBatteries(){
 		if(allBatteries.size() == 0){
 			cout << "No available batteries.\n";
 		}
 		else{
 			int i;
 			for(i=0; i < allBatteries.size(); i++)
 				cout <<i<<") "<<allBatteries.at(i).getName()<<endl;
 		}
 	}
void CreateRobotParts::displayParts()
{
    cout << "\n********  Head Display ************" << endl;
    if(allHeads.size() == 0)
        cout << "\nNo head created\n";
    else
        for(int i = 0; i < allHeads.size(); i++)
            allHeads[i].displayHeads();
    cout << "\n********  Arm Display ************" << endl;
    if(allArms.size() == 0)
        cout << "\nNo Arms created\n";
    else
        for(int i = 0; i < allArms.size(); i++)
            allArms[i].displayArm();
    cout << "\n********  Torso Display ************" << endl;
    if(allTorsos.size() == 0)
        cout << "\nNo Torso created\n";
    else
        for(int i = 0; i < allTorsos.size(); i++)
            allTorsos[i].displayTorso();
    cout << "\n********  Locomotor Display ************" << endl;
    if(allLocomotors.size() == 0)
        cout << "\nNo Locomotors created\n";
    else
        for(int i = 0; i < allLocomotors.size(); i++)
            allLocomotors[i].displayLocomotor();
    cout << "\n********  Battery Display ************" << endl;
    if(allBatteries.size() == 0)
        cout << "\nNo Battery created\n";
    else
        for(int i = 0; i < allBatteries.size(); i++)
            allBatteries[i].displayBattery();
}
