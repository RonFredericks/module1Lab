// Module1Lab.cpp : Defines the entry point for the console application.
// Module One Pointers Lab
//

#include "stdafx.h"
#include "Person.h"
#include <iostream>
#include <string>

void PassByValue( int );
void PassByRef( int & );

void ModifyPerson(Person&);

int main()
{
	int num1;
	int *pNum = new int;

	num1 = 3;
	*pNum = 5;  // Lab step 4

	PassByValue(num1);
	std::cout << "Inside main()" << std::endl;
	std::cout << "num1 value: " << num1 << std::endl;

	PassByRef(*pNum);
	std::cout << "Inside main()" << std::endl;
	std::cout << "pNum value: " << *pNum << std::endl;

	PassByValue(*pNum);
	std::cout << "Inside main()" << std::endl;
	std::cout << "*pNum value: " << *pNum << std::endl;	// *pNum value did not change 

	double *aDouble = new double;
	*aDouble = 9.0;
	std::cout << "aDouble value dereferenced: " << *aDouble << std::endl;
	delete aDouble;
	// std::cout << "aDouble value dereferenced after delete: " << *aDouble << std::endl;	// program crashes

	Person *pOne = new Person("Ron", "Fredericks", 65, 5.10, 230.);
	pOne->SayHello();

	ModifyPerson(*pOne);
	std::cout << "after call to ModifyPerson(Person)" << std::endl;
	pOne->SayHello();

	delete pNum;

    return 0;
}

void PassByValue(int num2) {
	
	std::cout << "Inside function PassByValue" << std::endl;

	num2++;
	std::cout << "num2 value: " << num2 << std::endl;

}

void PassByRef(int &pNum2) {

	std::cout << "Inside function PassByRef" << std::endl;

	pNum2 = 50;
	std::cout << "pNum2 value: " << pNum2 << std::endl;

}

void ModifyPerson(Person &aPerson) {
	aPerson.SetFirstName("Tony");
	aPerson.SetLastName("Hilfigure");
	aPerson.SetAge(35);
	aPerson.SetHeight(5.6);
	aPerson.SetWeight(176.);

}


