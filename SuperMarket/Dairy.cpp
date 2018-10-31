/* alon mar-chaim 305237687 03 Targil4 */

#include "Dairy.h"
#include <iostream>
#include <string>
using namespace std;
//this class hold the Dairy details of Dairy products
//default constructor
Dairy::Dairy():Basis()
{
	productType=0;
	productName1="empty";
	productName2="empty";
	color=0;
	fat=0;
};
//copy constructor
Dairy::Dairy(const Dairy &old):Basis(old)
{
	productType=old.productType;
	productName1=old.productName1;
	productName2=old.productName2;
	color=old.color;
	fat=old.fat;
};
//constructor, its goes to construct basis class first
Dairy::Dairy(int serialNum1,char line1,int shelf1,int quantity1,int productType1,int area1
						   ,int productType2,string productName11,string productName22,int color1,int fat1)
						   :Basis(serialNum1,line1,shelf1,quantity1,productType1,area1)
{
	productType=productType2;
	productName1=productName11;
	productName2=productName22;
	color=color1;
	fat=fat1;
};
//calculate the price of Dairy products(first go to calculate the basic price)
double Dairy::price(int factor)
{
	return (Basis::price(factor)+color-fat)*productType;
};
//print the Dairy details of the product
void Dairy::print()
{
	Basis::print(); //first print the basic details
	cout<<productName1<<" "<<productName2<<"("<<productType<<","<<color<<","<<fat<<")";
};
//destructor
Dairy::~Dairy()
{
};