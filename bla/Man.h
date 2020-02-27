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
	std::string ColorOfHair;
	std::string ColorOfEyes;

	
	//constructors
	Man();

	Man(std::string name, std::string surname);

	Man(std::string name, std::string surname, int weight, int height);

	//methods
	std::string ToTalk(std::string s);
	int CalculateSumAndMult(int a, int b, int c, int d);
	//int CalculateMult(int a,int b);

	//setters
	int GetWeight();
	int GetHeight();
	

	//getters
	void setWeight(int p);
	void setHeight(int l);

};

