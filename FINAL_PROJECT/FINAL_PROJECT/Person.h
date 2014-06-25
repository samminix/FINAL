#ifndef _PERSON_H_
#define _PERSON_H_

#include <iostream>
#include <string>
using namespace std;

class Person
{
private:
	string Name;
	int Money;

public:
	Person(); //default constructor
	Person(string Name, int Money); //constructor with parameters
	void moneys(); // function to ask the user how much money they have to spend
	void choose_restaurant(); // function so that the user can decide between the restaurants

};

#endif 