#pragma once
#include<iostream>
#include<string>
using namespace std;

class Vehicle
{
public:
	virtual string ToString() = 0;
	virtual ~Vehicle() {};
};

class Engine : public Vehicle {};

class Transmission : public Vehicle {};

class Body : public Vehicle {};

class Color : public Vehicle {};

class Price : public Vehicle {};

class GasolineEngine : public Engine
{
public:
	string ToString()
	{
		return "Gasoline";
	}
};

class DieselEngine : public Engine
{
public:
	string ToString()
	{
		return "Diesel";
	}
};

class MechanicalTransmission : public Transmission
{
public:
	string ToString()
	{
		return "Mechanical";
	}
};

class AutomaticTransmission : public Transmission
{
public:
	string ToString()
	{
		return "Automatic";
	}
};

class Sedan : public Body
{
public:
	string ToString()
	{
		return "Sedan";
	}
};

class Truck : public Body
{
public:
	string ToString()
	{
		return "Truck";
	}
};

class WhiteColor : public Color
{
public:
	string ToString()
	{
		return "White";
	}
};

class RedColor : public Color
{
public:
	string ToString()
	{
		return "Red";
	}
};

class SedanPrice : public Price
{
public:
	string ToString()
	{
		return "$30000.0";
	}
};

class TruckPrice : public Price
{
public:
	string ToString()
	{
		return "$40000.0";
	}
};