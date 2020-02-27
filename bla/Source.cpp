#include <iostream>
#include "Man.h"

int main(int a, int b, int c, int d)
{
	Man child = Man();
	std::cout << child.name<<" "<<child.surname<< std::endl;
	std::cout << child.ColorOfEyes << " " << child.ColorOfHair << std::endl;
	std::cout << child.GetHeight() << " " << child.GetWeight() << std::endl;
	std::cout << child.CalculateSumAndMult(a, b, c, d) << std::endl;
	

	system("pause");
	return 0;
}

//Car volvo = Car();
//volvo.color = "orange";
//volvo.setCoef(30);
//std::cout << volvo.color << std::endl;
//std::cout << volvo.getColorOfGlass() << " " << volvo.getCoef() << std::endl;
/*std::string str = volvo.drive("aaaa");
std::cout << str << std::endl;
std::cout << volvo.getSpeed() << std::endl;*/