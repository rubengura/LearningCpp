#include <iostream>
#include "Person.h"

using namespace std;

// Constructor with parameters
Person::Person(string name, int age)
{
	this->name = name;
	this->age = age;
	cout << "Person created with parameters." << endl;
}

// Copy constructor
Person::Person(const Person& other): name(other.name), age(other.age)
{
	cout << "Person created by copying." << endl;
}


void Person::setName(string name)
{
	this->name = name;
}

void Person::setAge(int age)
{
	this->age = age;
}

void Person::sayName() const
{
	cout << "My name is " << name << endl;
}

Person* Person::createPerson()
{
	Person* pPerson = new Person();
	pPerson->setName("Rubén");
	pPerson->setAge(30);
	return pPerson;
}