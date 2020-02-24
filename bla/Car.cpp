#include "Car.h"

Car::Car()
{
	std::cout << "hello from car consttuctor" << std::endl;
}

Car::Car(std::string color, std::string trademark, int speed)
{
	std::cout << "hello from car consttuctor with parameters" << std::endl;
	this->color = color;
	this->trademark = trademark;
	this->speed = speed;
	this->coef = 2;
}

std::string Car::drive(std::string s)
{
	return "I am driving. " + s;
}


int Car::getSpeed()
{
	return this->speed * this->coef;
}