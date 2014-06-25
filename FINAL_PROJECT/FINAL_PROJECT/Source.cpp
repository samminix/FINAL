// FINAL PROJECT!!!!!
// CS172 Tucker
// Samantha Nix

#include "Restaurant.h"
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <algorithm>
using namespace std;

//void sortType(vector<Restaurant>&); //function to sort foods into files based on money amount

int main()
{
	/*vector<Restaurant> foods; //creates a vector for the different foods
	string foodname;
	int money;*/

	fstream jimmyjohns("jimmyjohns.txt", ios::in);

	if (jimmyjohns.fail() )
	{
		cout << "Sorry no food for you... File failed" << endl;
	}

	fstream Atilanos("Atilanos.txt", ios::in);

	if (Atilanos.fail() )
	{
		cout << "Sorry no food for you... File failed" << endl;
	}

	/*while (jimmyjohns >> fooditem >> foodtype >> price)
	{
		jimmyjohns >> fooditem >> foodtype >> price;
		foods.push_back( Restaurant(fooditem, foodtype, price) );
	}*/

};