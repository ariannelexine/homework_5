#include "std_lib_facilities.h"
#include "locomotor.h"
   	void Locomotor::setPowerConsumed(double power){
   		powerConsumed = power;
   	}
   	void Locomotor::setMaxSpeed(int speed){
   		maxSpeed = speed;
   	}
   	double Locomotor::getPowerConsumed(){
   		return powerConsumed;
   	}
   	int Locomotor::getMaxSpeed(){
   		return maxSpeed;
   	}
   	