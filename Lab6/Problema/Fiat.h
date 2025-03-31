#pragma once
#ifndef FIAT_H
#define FIAT_H

#include "Car.h"

class Fiat : public Car {
private:
	float fuelCapacity;
	float fuelConsumption;
	float avgSpeed[3];
public:
	Fiat();
	float GetSpeed(Weather condition)const;
	float getFuelCapacity()const override;
	float GetFuelConsumption()const override;
	const char* GetName()const override;
};

#endif