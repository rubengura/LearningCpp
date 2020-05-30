// Copy Constructors.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Person.h"

int main()
{
    Person person1;

    person1.setName("Rubén");
    person1.setAge(30);

    Person clone1(person1);
    Person clone2 = person1;

    Person person2("Jessica", 25);

    return 0;
}

