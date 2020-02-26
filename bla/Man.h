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

	Man();
	Man(std::string name, std::string surname, std::int weight, std::int height);

	//methods
	std::string ToTalk(std::string s);
	int CalculateSum();
	int CalculateMult();

	//setters
	int GetCalculateSum();
	int GetCalculateMult();
	std::string GetToTalk();

	//getters
	void setCalculateSum(int p);
	void setCalculateMult(int l);
	void setToTalk(std::string m);

};

