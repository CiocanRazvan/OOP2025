#pragma once
#ifndef SEAT_H
#define SEAT_H

#include "Car.h"

class Seat : public Car {
private:
	float fuelCapacity;
	float fuelConsumption;
	float avgSpeed[3];
public:
	Seat();
	float GetSpeed(Weather condition)const;
	float getFuelCapacity()const override;
	float GetFuelConsumption()const override;
	const char* GetName()const override;
};
	
#endif
