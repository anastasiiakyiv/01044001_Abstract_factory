/*
Cтворіть програму з використанням паттерна проектування "абстрактна фабрика", яка
виводитиме комплектацію різних автомобілів із вказанням ціни.
*/

#include <iostream>
#include <memory>
#include "vehicles.h"
#include "carConfigurator.h"
#include "car.h"
using namespace std;

void PrintCarConfiguration(const string& configName, shared_ptr <Car> car) 
{
	cout << "\n======== " << configName << " ========\n";
	cout << "Engine: " << car->GetEngine()->ToString() << endl;
	cout << "Transmission: " << car->GetTransmission()->ToString() << endl;
	cout << "Body: " << car->GetBody()->ToString() << endl;
	cout << "Color: " << car->GetColor()->ToString() << endl;
	cout << "Price: " << car->GetPrice()->ToString() << endl;
}

int main()
{
	{
		shared_ptr <CarConfigurator> configurator = make_shared<CarConfigurator>();
		shared_ptr <Car> car1 = make_shared<Car>();
		configurator->SetCarFactory(make_shared<SedanFactory>());
		configurator->Configure((car1));
		PrintCarConfiguration("First car", car1);

		shared_ptr <Car> car2 = make_shared<Car>();
		configurator->SetCarFactory(make_shared <TruckFactory>());
		configurator->Configure(car2);
		PrintCarConfiguration("Second car", (car2));
	}
	return 0;
}