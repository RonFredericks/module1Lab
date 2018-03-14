#pragma once
#include <iostream>

class Person {

private:
	std::string firstName;
	std::string lastName;
	int age;
	double height;
	double weight;

public:

	Person();
	Person(std::string fName, std::string lName);
	Person(std::string fName, std::string lName, int uage, double uheight, double uweight);

	~Person();

	void SetFirstName(std::string fName);
	std::string GetFirstName();

	void SetLastName(std::string fName);
	std::string GetLastName();

	void SetAge(int uage);
	int GetAge();

	void SetHeight(double uheight);
	double GetHeight();

	void SetWeight(double uweight);
	double GetWeight();


	void SayHello();

};
