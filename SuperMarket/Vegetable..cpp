/* alon mar-chaim 305237687 03 Targil4 */

#include "Vegetable.h"
#include <iostream>
#include <string>
using namespace std;
//this class hold the details of Vegetable products
//default constructor
Vegetable::Vegetable():Agricultural()
{
	vitamins=0;
};
//copy constructor
Vegetable::Vegetable(const Vegetable &old):Agricultural(old)
{
	vitamins=old.vitamins;
};
//constructorits goes to construct Agricultural class first
Vegetable::Vegetable(int serialNum1,char line1,int shelf1,int quantity1,int productType1,int area1,string productName1
						   ,int productType2,int ripeSeasons1,int numOfSuppliers1,int vitamins1)
						   :Agricultural(serialNum1,line1,shelf1,quantity1,productType1,area1
						   ,productName1,productType2,ripeSeasons1,numOfSuppliers1)
{
	vitamins=vitamins1;
};
//calculate the price of fruit products(first go to calculate the Agricultural price)
double Vegetable::price(int factor)
{
	return Agricultural::price(factor)+vitamins*2;
};
//print the details of fruit 
void Vegetable::print()
{
	Agricultural::print(); //first print the Agricultural details
	cout<<"("<<vitamins<<")";
};
//destructor
Vegetable::~Vegetable()
{
};

