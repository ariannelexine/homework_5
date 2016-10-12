#ifndef __ROBOT_MODEL_H
#define __ROBOT_MODEL_H 2016

#include "create_parts.h"
class Robot_Model {
  public:
    Robot_Model (CreateParts& parts) : create_parts(parts) { }
    string get_name();
    string get_type();
    void set_name();
    void set_type();
  private:
    string name();
    string model_type();
    CreateParts& create_parts;
};
#endif
