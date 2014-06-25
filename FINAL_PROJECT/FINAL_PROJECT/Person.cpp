#include "Person.h"

Person::Person() //default constructor
{
	Name = "Harry Potter"; //default person
	Money = 20; //default amount of money
}

Person::Person(string name, int money) //person constructor with parameters
{
	Name = name; 
	Money = 20;
}

void moneys(int x)
{
	cout << "How much money do you have to spend on lunch?? " << endl;
	cin >> x;

};

void choose_restaurant(string ans)
{
	cout << "Would you rather eat at Jimmy Johns or Atilanos? " << endl;
	cin >> ans;

	//if ans ==
};