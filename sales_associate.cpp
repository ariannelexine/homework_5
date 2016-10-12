#include "sales_associate.h"
#include "std_lib_facilities.h"

SalesAssociate::SalesAssociate()
{
    saName = "None";        // set sales associate name to "none" if it hasn't set
}

SalesAssociate::~SalesAssociate()
{
        // free memory here if any memory was allocated using "new"
}

void SalesAssociate::createOrder()
{
    // ask sales associate if it is a online or instore order
        //  call  instoreOrder()  onlineOrder()
    cout << "Date of sale: (mm/dd/yyyy): ";
    // check to make sure the user did not enter any garbage
    getline(cin, dateOfSale);
    cin.ignore();       // clear newline character that was left in the input stream --> istream
    cout << "Name of sales associate: ";
    getline (cin, saName);
    cin.ignore();       // clear newline character that was left in the input stream --> istream
    cout << "Name of Beloved Customer: ";
    string name;
    getline(cin, name);
    customerName.setName(name);         // set customer name
    // model.listModel(); // list all the model and ask sales associate to select from it or
    // lookUpModel();     // ask the sales associate for the model number
    // ***** create a model inside of "robot_model" with associated details, such as cost

}
