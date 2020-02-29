#include "Man.h"

Man::Man()
{
	std::cout << "Hello from constructor without parametrs" << std::endl;
	this->name = "John";
	this->surname = "Kombarov";
	this->Color_Of_Eyes = "blue";
	this->Color_Of_Hair = "brown";
	this->height = 178;
	this->weight = 60;
	this->profession = "foodcreater";
}


//Man::Man(std::string name, std::string surname) 
//{
//	std::cout << "Hello from constructor with parametrs" << std::endl;
//	this->name = name;
//	this->surname = surname;
//}

Man::Man(std::string name, std::string surname)
{
	std::cout << "Hello from constructor with parametrs(privite and public)" << std::endl;
	this->name = name;
	this->surname = surname;
	this->height = height;
	this->weight = weight;
	this->Color_Of_Eyes = Color_Of_Eyes;
	this->Color_Of_Hair = Color_Of_Hair;
	this->profession = profession;
}

std ::string Man::To_Talk(std::string s)
{
	return s;
}

int Man::Calculate_Mult(int a, int b, int c)
{
	std::cout << "Pls tell me a and b" << std::endl;
	std::cin >> a >> b;
	c = a * b;
	//std::cout << "Solution=" << c << std::endl;
	return c;
}

int Man::Calculate_Sum(int a, int b, int c)
{
	std::cout << "Pls tell me a and b" << std::endl;
	std::cin >> a >> b;
	c = a + b;
	//std::cout << "Solution=" << c << std::endl;
	return c;
}




int Man::CalculateSumAndMult(int a,int b,int c,int d)
{

	std::cout << "Pls tell me a and b " << std::endl;
	std::cin >> a >> b ;
	std::cout << "Sum or Multiply" << std::endl;
	std::cin >> d;
	switch (d)
	{
		case 1:
			c = a + b;
			break;
		case 2 :
			c = a * b;
			break;
		default:
			std::cout << "Pls repeat again" << std::endl;
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

