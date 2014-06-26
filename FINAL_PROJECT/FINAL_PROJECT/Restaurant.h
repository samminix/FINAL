#ifndef _RESTAURANT_H_
#define _RESTAURANT_H_

#include <iostream>
#include <string>
using namespace std;

class Restaurant
{
private:
	int Food; // stores price of food
	int SodaPrice; // stores price of soda
	int SidePrice; // stores price of a side (eg chips)
	int DessertPrice; // stores price of a dessert
	string RestaurantName; //stores name of restaurant

	string fooditem;
	string foodtype;
	int Price;

public:
	Restaurant(); //default constructor
	Restaurant(string Name);
	int get_SodaPrice(); // function to access how much soda costs
	int get_SidePrice(); // function to access how much a side costs
	int get_DessertPrice(); // function to access how much a dessert costs

	Restaurant(string fooditem, string foodtype, int Price);
	string get_fooditem();
	string get_foodtype();
	int get_price();
	bool operator< (Restaurant&);

	Restaurant jimmyjohns();
	Restaurant Atilanos(); 


};

#endif 