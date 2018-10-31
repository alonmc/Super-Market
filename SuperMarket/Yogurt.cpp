/* alon mar-chaim 305237687 03 Targil4 */

#include "Yogurt.h"
#include <iostream>
#include <string>
using namespace std;
//this class hold the details of Yogurt products
//default constructor
Yogurt::Yogurt():Dairy()
{
};
//copy constructor
Yogurt::Yogurt(const Yogurt &old):Dairy(old)
{
};
//constructor, its goes to construct dairy class first
Yogurt::Yogurt(int serialNum1,char line1,int shelf1,int quantity1,int productType1,int area1
						   ,int productType2,string productName11,string productName22,int color1,int fat1)
						   :Dairy(serialNum1,line1,shelf1,quantity1,productType1,area1,productType2,productName11
						   ,productName22,color1,fat1)
{
};
//calculate the price of Yogurt products(first go to calculate the Dairy price)
double Yogurt::price(int factor)
{
	return Dairy::price(factor);
};
//print the details of Yogurt 
void Yogurt::print()
{
	Dairy::print();//first print the Dairy details
};
//destructor
Yogurt::~Yogurt()
{
};