//
#include "std_lib_facilities.h"
#include "view.h"
#include "robotparts.h"
#include "createRobotParts.h"
#include "controller.h"
#include "robotModels.h"

int main()
{
    View newView;
    CreateRobotParts robotPartConstruct;
    Controller controller(robotPartConstruct);
    //RobotModels robotModel(robotPartConstruct);

    double key = 0;

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



    //ao.setName("King Nena");
    //cout << ao.getName() << endl;

    return 0;
}
