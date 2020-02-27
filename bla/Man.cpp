#include "Man.h"

using namespace std;

Man::Man()
{
	std::cout << "Hello from constructor without parametrs" << endl;
	this->name = "John";
	this->surname = "Kombarov";
	this->ColorOfEyes = "blue";
	this->ColorOfHair = "brown";
	this->height = 178;
	this->weight = 60;
}


//Man::Man(std::string name, std::string surname) 
//{
//	std::cout << "Hello from constructor with parametrs" << endl;
//	this->name = name;
//	this->surname = surname;
//}

Man::Man(std::string name, std::string surname)
{
	std::cout << "Hello from constructor with parametrs(privite and public)" << endl;
	this->name = name;
	this->surname = surname;
	this->height = height;
	this->weight = weight;
	this->ColorOfEyes = ColorOfEyes;
	this->ColorOfHair = ColorOfHair;
}

std ::string Man::ToTalk(std::string s)
{
	return "Hello world!";
}

int Man::CalculateSumAndMult(int a,int b,int c,int d)
{

	std::cout << "Pls tell me a and b " << std::endl;
	std::cin >> a >> b ;
	cout << "Sum or Multiply" << endl;
	cin >> d;
	switch (d)
	{
		case 1:
			c = a + b;
			break;
		case 2 :
			c = a * b;
			break;
		default:
			cout << "Pls repeat again" << endl;
			break;
	}
	return c;
}


int Man :: GetHeight()
{
	return this->height;
}

void Man::setHeight(int l)
{
	this->height = l;
}

int Man :: GetWeight()
{
	return this->weight;
}

void Man::setWeight(int p)
{
	this->weight = p;
}

