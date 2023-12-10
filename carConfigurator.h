#pragma once
#include<iostream>
#include "car.h"
#include "vehicles.h"
#include "factories.h"
using namespace std;

class CarConfigurator
{
	shared_ptr <CarFactory> carFactory;
public:
	CarConfigurator()
	{
		carFactory = nullptr;
	}
	virtual ~CarConfigurator() {}

	shared_ptr <CarFactory> GetCarFactory() 
	{
		return (carFactory);
	}
	void SetCarFactory(shared_ptr <CarFactory> carCurrentFactory) {
		carFactory = (carCurrentFactory);
	}
	void Configure(shared_ptr <Car> car)
	{
		car->SetEngine((carFactory->CreateEngine()));
		car->SetTransmission((carFactory->CreateTransmission()));
		car->SetBody((carFactory->CreateBody()));
		car->SetColor((carFactory->CreateColor()));
		car->SetPrice((carFactory->CreatePrice()));
	}
};