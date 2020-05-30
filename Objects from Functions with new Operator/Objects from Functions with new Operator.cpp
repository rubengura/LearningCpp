// Objects from Functions with new Operator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Person.h"

using namespace std;

Person* createPerson()
{
	Person* pPerson = new Person();
	pPerson->setName("Rubén");
	pPerson->setAge(30);
	return pPerson;
}

int main()
{
    Person* pPerson = createPerson();
    pPerson->sayName();
    delete pPerson;
}
