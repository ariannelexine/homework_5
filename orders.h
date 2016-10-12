#ifndef _ORDERS_H_
#define _ORDERS_H_

#include "std_lib_facilities.h"
class Orders
{
    public:
    Orders();
    double totalPrice();
    double calculateShipping();
    double robotPrice();

    private:
    //double totalPrice;
    //double shippingCost;
    string orderNumber;         // let the system generate a order # using random() or some function like that
    size_t quantity;

};

#endif // _ORDERS_H_
