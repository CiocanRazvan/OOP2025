#pragma once
#ifndef BMW_H
#define BMW_H

#include "Car.h"

class Bmw : public Car {
private:
	float fuelCapacity;
	float fuelConsumption;
	float avgSpeed[3];
public:
	Bmw();
	float GetSpeed(Weather condition)const override;
	float getFuelCapacity()const override;
	float GetFuelConsumption()const override;
	const char* GetName()const override;
};

#endif