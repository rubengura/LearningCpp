// Allocating Memory.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Person.h"

using namespace std;

int main()
{
    Person *pPerson = new Person[26];

    char c = 'a';


    for (int i = 0; i <= 25; i++)
    {
        string character(1, c);
        pPerson[i].setName(character);
        pPerson[i].sayName();
        c++;
    }
    
    delete[] pPerson;
}


