#pragma once
#include<iostream>
#include"vehicles.h"
using namespace std;

class Car
{
	shared_ptr <Engine> engine;
	shared_ptr <Transmission> transmission;
	shared_ptr <Body> body;
	shared_ptr <Color> color;
	shared_ptr <Price> price;
public:
	Car()
	{
		engine = nullptr;
		transmission = nullptr;
		body = nullptr;
		color = nullptr;
		price = nullptr;
	}
	virtual ~Car() {}

	shared_ptr <Engine> GetEngine() 
	{
		return (engine);
	}
	void SetEngine(shared_ptr <Engine> newEngine) 
	{
		engine = (newEngine);
	}
	shared_ptr <Transmission> GetTransmission()
	{
		return (transmission);
	}
	void SetTransmission(shared_ptr <Transmission> newTransmission)
	{
		transmission = (newTransmission);
	}
	shared_ptr <Body> GetBody()
	{
		return (body);
	}
	void SetBody(shared_ptr <Body> newBody)
	{
		body = (newBody);
	}
	shared_ptr <Color> GetColor()
	{
		return (color);
	}
	void SetColor(shared_ptr <Color> newColor)
	{
		color = (newColor);
	}
	shared_ptr <Price> GetPrice()
	{
		return (price);
	}
	void SetPrice(shared_ptr <Price> newPrice)
	{
		price = (newPrice);
	}
};