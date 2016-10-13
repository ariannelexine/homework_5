//testing new branches


#include <iostream>
#include <string>
#include "create_parts.h"
#include "view.h"
#include "robot_model.h"


using namespace std;

int main()
{
    CreateParts newPart;
    View newView;
    int key = 0;

    while( key != 4 )           // accout for if the it is not a number--
    {                           // you could use isdigit(); found in #include <cctype> library
        newView.main_menu();
        cin >> key;

        //test conditions for user input
        if( key == 1 )
            cout << "You selected create" << endl;
        else if( key == 2 )
            cout << "You selected Report" << endl;
        else if( key == 3 )
            cout << "you selected save" << endl;
        else if( key == 4 )
            cout << "exiting..." << endl;
        else if( key == 5 )
            newView.print_documentation();
        else                                //user error, change to throw exception
            cout << "You didnt enter a valid command. Please try again..." << endl;
    }



    //ao.setName("King Nena");
    //cout << ao.getName() << endl;

    return 0;
}
