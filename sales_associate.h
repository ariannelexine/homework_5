#ifndef _SALES_ASSOCIATE_H
#define _SALES_ASSOCIATE_H

#include "std_lib_facilities.h"
#include "customer.h"
#include "robot_model.h"

class SalesAssociate
{
    public:
        SalesAssociate ();                      // default constructor
        ~SalesAssociate();                      // destructor--clean up after program is finished
        string getSAName ();                    // return sales associate name
        void setSAName (string sa);             // set sales associate name
        string getCustomerName();               // return customer name
        void setCustomerName(string custName);  // set customer name to custName
        void createOrder();                     // create order for the customer
        void billOfSale();                      // shows a summary of the sale

    private:
        string saName;                  // stores sales associate name
        Customer customerName;          // store customer name
        Robot_Model model;              // stores the model of the robot
        string dateOfSale;              // store date the sale was made
        vector <string> robotOrdered;   // stores the number of robots ordered by the customer
};

#endif // _SALES_ASSOCIATE_H

/*
* Method: getCustomerName
* Parameter: None
* Returns: a string which is the name of the customer
* Description: this method returns the name of the customer
*              for which the order is created
*/
inline string SalesAssociate::getCustomerName()
{
    return customerName.getName();
}
/*
* Method: getSAName
* Parameter: None
* Returns: a string which is the name of the sales associate
* Description: this method returns the name of the sales associate
*              who performed the order
*/
inline string SalesAssociate::getSAName()
{
    return saName;
}

inline void SalesAssociate::setCustomerName(string custName)
{
    customerName.setName(custName);
}
