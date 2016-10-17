//
#include "std_lib_facilities.h"
#include "view.h"
#include "robotparts.h"
#include "createRobotParts.h"
#include "controller.h"
#include "robotModels.h"

int main()
{
    CreateRobotParts robotPartConstruct;
    Controller controller(robotPartConstruct);

    controller.showControllerMenu();

    return 0;
}
