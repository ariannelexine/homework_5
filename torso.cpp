#include "std_lib_facilities.h"
#include "torso.h"
void Torso::setBatteryCompartments(int b){
    batteryCompartments = b;
}
int Torso::getBatteryCompartments(){
    return batteryCompartments;
}
ostream &operator<<(ostream &output, Torso &t)
{
  output << "Torso Name: " << t.getName() << endl;
  output << "Torso Part #: " << t.getPartNumber() << endl;
  output << "Torso Type: " << t.getType() << endl;
  output << "Torso Weight: " << t.getWeight() << endl;
  output << "Torso Cost: " << t.getCost() << endl;
  output << "Torso Description: " << t.getDescription() << endl;
  output << "Torso Battery Compartments: " << t.getBatteryCompartments() << endl;

}
void Torso::displayTorso(ostream &output, Torso &t)
{
    //operator<<(cout, t);
    output << t << endl;
}
