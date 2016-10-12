#ifndef _CUSTOMER_H_
#define _CUSTOMER_H_

#include "std_lib_facilities.h"
#include "orders.h"


class Customer
{
    public:
        Customer();
        ~Customer();
        string getName();
        void setName(string n);
        string getNumber();
        void setNumber(string number);
        vector<Orders> getOrders();

    private:
        string name;
        string phoneNumber;
        vector <Orders> orders;

};
#endif // _CUSTOMER_H_

inline string Customer::getName()
{
    return name;
}

inline void Customer::setName(string n)
{
    name = n;
}

inline string Customer::getNumber()
{
    return phoneNumber;
}

inline void Customer::setNumber(string number)
{
    phoneNumber = number;
}
