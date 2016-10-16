#include "std_lib_facilities.h"
#include "view.h"


View::View(){
   //default constructor
}

void View::main_menu(){
    cout << endl<<endl;
    cout << "Main Menu\n**************\n";
    cout << "1) Create Parts\n";
    cout << "2) Create Model\n";
    cout << "3) Save\n";
    cout << "4) Quit\n";
    cout << "5) View Documentation.\n";
    cout << "Command?: ";
}
void View::createParts_menu(){
    cout << endl<<endl;
    cout << "Parts Menu\n**************\n";
    cout << "1.1) Create Head\n";
    cout << "1.2) Create Torso\n";
    cout << "1.3) Create Arm\n";
    cout << "1.4) Create Locomotor\n";
    cout << "1.5) Create Battery\n";
    cout << "1.6) Main Menu\n";
    cout << "Command?: ";
}
void View::createModels_menu(){
    cout << endl<<endl;
    cout << "Models Menu\n**************\n";
    cout << "2.1) Choice Head\n";
    cout << "2.2) Choice Torso\n";
    cout << "2.3) Choice Arm\n";
    cout << "2.4) Choice Locomotor\n";
    cout << "2.5) Choice Battery\n";
    cout << "2.6) Main Menu\n";
    cout << "Command?: ";
}
void View::report_menu(){
    cout << endl<<endl;
    cout << "Report Menu\n**************\n";
    cout << "2.1) View Robot Catalog\n";
    cout << "Command?: ";
}


void View::print_documentation(){
    cout << "This is a simple library program. Type in the numbers corresponding to the options listed into the request line to get started. Initially their is no publications, so step 1 would be to type 1 in the request line to add a new publication. To exit the program type any letters in the request line.";
}
