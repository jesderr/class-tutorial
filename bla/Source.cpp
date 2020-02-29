#include <iostream>
#include "Man.h"

int main(int a , int b , int c)
{
	Man child = Man();
	std::cout << child.To_Talk("Hello world") << std::endl;
	std::cout << child.name<<" "<<child.surname<< std::endl;
	std::cout << child.Color_Of_Eyes << " " << child.Color_Of_Hair << std::endl;
	std::cout << child.GetHeight() << " " << child.GetWeight() << std::endl;
	std::cout << child.profession << std::endl;
	std::cout << child.Calculate_Mult( a, b, c) << std::endl;
	std::cout << child.Calculate_Sum(a, b, c) << std::endl;

	

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