/* alon mar-chaim 305237687 03 Targil4 */

#include "Agricultural.h"
#include <iostream>
#include <string>
using namespace std;
//this class hold the Agricultural details of Agricultural products
//default constructor
Agricultural::Agricultural():Basis()
{
	productType=0;
	productName="empty";
	ripeSeasons=0;
	numOfSuppliers=0;
};
//copy constructor
Agricultural::Agricultural(const Agricultural &old):Basis(old)
{
	productType=old.productType;
	productName=old.productName;
	ripeSeasons=old.ripeSeasons;
	numOfSuppliers=old.numOfSuppliers;
};
//constructor, its goes to construct basis class first
Agricultural::Agricultural(int serialNum1,char line1,int shelf1,int quantity1,int productType1,int area1
						   ,string productName1,int productType2,int ripeSeasons1,int numOfSuppliers1)
						   :Basis(serialNum1,line1,shelf1,quantity1,productType1,area1)
{
	
	productType=productType2;
	productName=productName1;
	ripeSeasons=ripeSeasons1;
	numOfSuppliers=numOfSuppliers1;
};
//calculate the price of Agricultural products(first go to calculate the basic price)
double Agricultural::price(int factor)
{
	return Basis::price(factor)*3*(5-ripeSeasons)+5*numOfSuppliers+productType;
};
//print the Agricultural details of the product
void Agricultural::print()
{
	Basis::print();//first print the basic details
	cout<<productName<<"("<<productType<<","<<ripeSeasons<<","<<numOfSuppliers<<")";
};
//destructor
Agricultural::~Agricultural()
{
};