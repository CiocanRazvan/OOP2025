#pragma once
#ifndef RANGE_H
#define RANGE_H

#include "Car.h"

class RangeRover : public Car {
private:
	float fuelCapacity;
	float fuelConsumption;
	float avgSpeed[3];
public:
	RangeRover();
	float GetSpeed(Weather condition)const;
	float getFuelCapacity()const override;
	float GetFuelConsumption()const override;
	const char* GetName()const override;
};

#endif