#include "Restaurant.h"

Restaurant::Restaurant() //default constructor
{
	RestaurantName = "Thai Bamboo"; //default restaurant
	SodaPrice = 4; //default soda price
	SidePrice = 5; //default side price
	DessertPrice = 6; //default dessert price
}

Restaurant::Restaurant(string Name) //restaurant constructor with parameters
{
	RestaurantName = Name; 
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