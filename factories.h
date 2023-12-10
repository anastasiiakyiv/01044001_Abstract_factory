#pragma once
#include<iostream>
#include "vehicles.h"
using namespace std;

class CarFactory
{
public:
	virtual shared_ptr <Engine> CreateEngine() = 0;
	virtual shared_ptr <Transmission> CreateTransmission() = 0;
	virtual shared_ptr <Body> CreateBody() = 0;
	virtual shared_ptr <Color> CreateColor() = 0;
	virtual shared_ptr <Price> CreatePrice() = 0;
};

class SedanFactory : public CarFactory
{
public:
	shared_ptr <Engine> CreateEngine()
	{
		return (make_shared <GasolineEngine>());
	}
	shared_ptr <Transmission> CreateTransmission()
	{
		return (make_shared <AutomaticTransmission>());
	}
	shared_ptr <Body> CreateBody()
	{
		return (make_shared <Sedan>());
	}
	shared_ptr <Color> CreateColor()
	{
		return (make_shared <WhiteColor>());
	}
	shared_ptr <Price> CreatePrice()
	{
		return (make_shared <SedanPrice>());
	}
};

class TruckFactory : public CarFactory
{
	shared_ptr <Engine> CreateEngine()
	{
		return (make_shared <DieselEngine>());
	}
	shared_ptr <Transmission> CreateTransmission()
	{
		return (make_shared <MechanicalTransmission>());
	}
	shared_ptr <Body> CreateBody()
	{
		return (make_shared <Truck>());
	}
	shared_ptr <Color> CreateColor()
	{
		return (make_shared <RedColor>());
	}
	shared_ptr <Price> CreatePrice()
	{
		return (make_shared <TruckPrice>());
	}
};