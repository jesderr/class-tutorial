#pragma once

#include <iostream>

class Car
{
private:
	int coef;
public:
	// fields
	std::string trademark;
	std::string color;
	int speed;

	// constructors
	Car();
	Car(std::string color, std::string trademark, int speed);

	// methods
	std::string drive(std::string s);
	int getSpeed();
};
