/* alon mar-chaim 305237687 03 Targil4 */

#include "Cheese.h"
#include <iostream>
#include <string>
using namespace std;
//this class hold the details of Cheese products
//default constructor
Cheese::Cheese():Dairy()
{
	extras=0;
};
//copy constructor
Cheese::Cheese(const Cheese &old):Dairy(old)
{
	extras=old.extras;
};
Cheese::Cheese(int serialNum1,char line1,int shelf1,int quantity1,int productType1,int area1
						   ,int productType2,string productName11,string productName22,int color1,int fat1,int extras1)
						   :Dairy(serialNum1,line1,shelf1,quantity1,productType1,area1,productType2,productName11,productName22,color1,fat1)
{
	extras=extras1;
};
//calculate the price of Cheese products(first go to calculate the Dairy price)
double Cheese::price(int factor)
{
	return Dairy::price(factor)+extras;
};
//print the details of drink 
void Cheese::print()
{
	Dairy::print();//first print the Dairy details 
	cout<<"("<<extras<<")";
};
//destructor
Cheese::~Cheese()
{
};