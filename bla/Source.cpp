#include <iostream>
#include "Car.h"


int main()
{
	Car volvo = Car("red", "volvo", 25);
	std::cout << volvo.color << " " << volvo.trademark << std::endl;
	std::string str = volvo.drive("aaaa");
	std::cout << str << std::endl;
	std::cout << volvo.getSpeed() << std::endl;
	system("pause");
	return 0;
}