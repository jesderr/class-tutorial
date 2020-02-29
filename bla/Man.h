#pragma once
#include <iostream>

class Man

{
private:
	int weight;
	int height;

public:

	//fields
	std::string name;
	std::string surname;
	std::string Color_Of_Hair;
	std::string Color_Of_Eyes;
	std::string profession;

	
	//constructors
	Man();

	Man(std::string name, std::string surname);

	Man(std::string name, std::string surname, int weight, int height);

	//methods
	std::string To_Talk(std::string s);
	int CalculateSumAndMult(int a, int b, int c, int d);
	int Calculate_Mult(int a,int b,int c);
	int Calculate_Sum(int a, int b,int c);

	//setters
	int GetWeight();
	int GetHeight();
	

	//getters
	void setWeight(int p);
	void setHeight(int l);

};

