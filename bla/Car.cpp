#include "Car.h"

Car::Car()
{
	std::cout << "hello from car consttuctor without parameters" << std::endl;
	this->color = "yellow";
	this->color_of_glass = "black";
}

Car::Car(std::string color, std::string trademark, int speed)
{
	std::cout << "hello from car consttuctor with parameters" << std::endl;
	this->color = color;
	this->trademark = trademark;
	this->speed = speed;
	this->coef = 2;
	this->color_of_glass= "green";
}

std::string Car::drive(std::string s)
{
	return "I am driving. " + s;
}

std::string Car::getColorOfGlass()
{
	return this->color_of_glass;
}


int Car::getSpeed()
{
	return this->speed * this->coef;
}

int Car::getCoef()
{
	return this->coef;
}

void Car::setCoef(int p)
{
	this->coef = p;
}