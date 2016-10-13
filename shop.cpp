//

#include "std_lib_facilities.h"
#include "create_parts.h"
#include "view.h"
#include "robot_model.h"


int main()
{
    View newView;
    int key = 0;
    
    vector<CreateParts> parts;


    while( key != 4 )           // accout for if the it is not a number--
    {                           // you could use isdigit(); found in #include <cctype> library
        newView.main_menu();
        cin >> key;

        //test conditions for user input
        if( key == 1 )
        {
            string name, type, description;
            int partNumber;
            double weight, cost;
            
            cout << "Enter name: ";
            cin.ignore();
            getline(cin, name);
            cout << "Enter part number: ";
            cin >> partNumber;
            cout << "Enter component type: ";
             cin.ignore();
            getline(cin, type);
            cout << "Enter weight: ";
            cin >> weight;
            cout << "Enter cost: ";
            cin >> cost;
            cout << "Enter description: ";
            cin.ignore();
            getline(cin, description);
            
            parts.push_back(CreateParts(name, partNumber, type, weight, cost,
                                        description));
        
        }
        
        else if( key == 2 )
        {
           cout << parts[0].getName();
           cout << parts[1].getName();
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



    //ao.setName("King Nena");
    //cout << ao.getName() << endl;

    return 0;
}
