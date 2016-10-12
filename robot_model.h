#ifndef __ROBOT_MODEL_H
#define __ROBOT_MODEL_H 2016

#include "create_parts.h"
class Robot_Model {
  public:
    Robot_Model();          // default constructor
    //Robot_Model (CreateParts& parts) : create_parts(parts) { }
    /*
        I don't think you can declare the above statement like that
        because "create_parts" and "parts" has a lot of members and the complier wouldn't
        know what member to assign to what member. Moreover, there is no predefined method to deal
        with that kind of situation.Therfore, you would have to overload the assignment operator
        and possibly the copy constructor similar to the
        one below:

        CreateParts opertor=(const CreateParts & parts);  --> assignment operator

        this would have to be done in
    */
    string get_name();
    string get_type();
    void set_name();
    void set_type();

  private:
    string name;
    string model_type;
    //CreateParts& create_parts;
};


#endif
