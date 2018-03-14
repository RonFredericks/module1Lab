#include "stdafx.h"
#include "Person.h"
#include <iostream>
#include <string>


Person::Person() {

}

Person::Person(std::string fName, std::string lName) {
	firstName = fName;
	lastName = lName;
}

Person::Person(std::string fName, std::string lName, int uage, double uheight, double uweight) {
	firstName = fName;
	lastName = lName;
	age = uage;
	height = uheight;
	weight = uweight;
}

Person::~Person() {
	std::cout << "Person destructor called" << std::endl;
}

void Person::SetFirstName(std::string fName) {
	this->firstName = fName;

}

std::string Person::GetFirstName() {
	return this->firstName;
}

void Person::SetLastName(std::string fName) {
	this->lastName = fName;
}

std::string Person::GetLastName() {
	return this->lastName;
}

void Person::SetAge(int uage) {
	this->age = uage;
}

int Person::GetAge() {
	return this->age;
}

void Person::SetHeight(double uheight) {
	this->height = uheight;
}

double Person::GetHeight() {
	return this->height;
}

void Person::SetWeight(double uweight) {
	this->weight = uweight;
}

double Person::GetWeight() {
	return this->weight;
}

void Person::SayHello() {
	std::cout << "Hello from " << this->GetFirstName() << " " << this->GetLastName() << ", "
		<< this->GetAge() << " years old" << ", height of " << this->GetHeight()
		<< ", and weight of " << this->GetWeight()
		<< std::endl;
}

/*
Person::Person()
{
}


Person::~Person()
{
}
*/