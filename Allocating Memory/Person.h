#pragma once
#include <iostream>

using namespace std;

class Person
{
private:
	string name = "unnamed";
	int age = 0;

public:
	// Constructor
	Person() { cout << "Person created." << endl; };
	// Constructor with parameters
	Person(string name, int age);
	// Copy Constructor
	Person(const Person& other);

	void setName(string name);
	void setAge(int age);
	void sayName() const;

	~Person();

};


