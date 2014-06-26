#include "Restaurant.h"
#include <fstream>

Restaurant::Restaurant() //default constructor
{
	RestaurantName = "Thai Bamboo"; //default restaurant
	SodaPrice = 4; //default soda price
	SidePrice = 5; //default side price
	DessertPrice = 6; //default dessert price
}

Restaurant::Restaurant(string restaurantname) //restaurant constructor with parameters
{
	RestaurantName = restaurantname; 
	SodaPrice = 2;
	SidePrice = 3;
	DessertPrice = 4;
}


int Restaurant::get_SodaPrice()
{
	return SodaPrice; //returns price for a sodapop
}

int Restaurant::get_SidePrice()
{
	return SidePrice; //returns price for a side
}

int Restaurant::get_DessertPrice()
{
	return DessertPrice; //returns dessert price for that particular restaurant
}




Restaurant::Restaurant(string item, string type, int price) //constructor created so that i can sort out foods based on cost
{
		fooditem = item;
		foodtype = type;
		Price = price;
}

string Restaurant::get_fooditem()
{
	return fooditem; //returns food item
}

string Restaurant::get_foodtype()
{
	return foodtype; //returns what the food is
}

int Restaurant::get_price()
{
	return Price; //returns how much the food costs
}

bool Restaurant::operator<(Restaurant& foods) //compares price of two food items
{
	return (Price < foods.get_price() );
}