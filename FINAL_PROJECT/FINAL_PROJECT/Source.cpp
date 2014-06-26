// FINAL PROJECT!!!!!
// CS172 Tucker
// Samantha Nix

#include "Restaurant.h"
#include "Person.h"
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <algorithm>
using namespace std;

void sortType(vector<Restaurant>&); //function to sort foods into files based on money amount

int main()
{
	vector<Restaurant> foods; //creates a vector for the different foods
	string fooditem, foodtype;
	int price;

	fstream jimmyjohns("jimmyjohns.txt", ios::in); 

	if (jimmyjohns.fail() ) //chcecking if file works
	{
		cout << "Sorry no food for you... File failed" << endl;
	}

	fstream Atilanos("Atilanos.txt", ios::in);

	if (Atilanos.fail() ) //checking if file works
	{
		cout << "Sorry no food for you... File failed" << endl;
	}

	while (jimmyjohns >> fooditem >> foodtype >> price)
	{
		jimmyjohns >> fooditem >> foodtype >> price;
		foods.push_back( Restaurant(fooditem, foodtype, price) );
	}
	sort(foods.begin(), foods.end() ); //sort the values
	sortType(foods); 


	while (Atilanos >> fooditem >> foodtype >> price)
	{
		Atilanos >> fooditem >> foodtype >> price;
		foods.push_back( Restaurant(fooditem, foodtype, price) );
	}
	sort(foods.begin(), foods.end() ); //sort the values
	sortType(foods); 



	//way to display options when only having four dollars
	string getcontent;
	ifstream openfile ("four.txt");
	while(getline(openfile, getcontent) )
	{
		cout << getcontent << endl;
	}
	//problem in that i figured out how to display the options for a specific txt file however i cant do the same thing for other files or there is a build error 


	Person p1("Samantha", 20);
	p1.choose_restaurant();
	p1.moneys();


};

void sortType(vector<Restaurant>& foods)
{
	fstream four("four.txt", ios::out); //create fstream objects for pricing
	fstream five("five.txt", ios::out);
	fstream six("six.txt", ios::out);
	fstream seven("seven.txt", ios::out);
	fstream eight("eight.txt", ios::out);
	string item, type;
	int price;
	for (int i = 0; i < foods.size(); i++)
	{
		item = foods[i].get_fooditem(); // sets variable equal to the corresponding values for the specified object
		type = foods[i].get_foodtype();
		price = foods[i].get_price();

		if (price >= 0 && price <= 4)
		{
			four << item << " " << type << " " << price << endl; // write values into the four dollar text file
		}
		if (price >= 4 && price <= 5)
		{
			five << item << " " << type << " " << price << endl; // write values into the five dollar and under text file
		}
		if (price >= 0 && price <= 6)
		{
			six << item << " " << type << " " << price << endl; // write values into the six dollar and under text file
		}
		if (price >= 0 && price <= 7)
		{
			seven << item << " " << type << " " << price << endl; // write values into the seven dollar text file
		}
		if (price >= 0 && price <= 8)
		{
			eight << item << " " << type << " " << price << endl; // write values into the eight dollar text file
		}
	} //problem in that it isnt adding all of the items into the lists so some of the options are being left out....

four.close(); //closing fstream objects
five.close();
six.close();
seven.close();
eight.close();
}