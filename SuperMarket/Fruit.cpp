/* alon mar-chaim 305237687 03 Targil4 */

#include "Fruit.h"
#include <iostream>
#include <string>
using namespace std;
//this class hold the details of fruit products
//default constructor
Fruit::Fruit():Agricultural()
{
	sugar=0;
};
//copy constructor
Fruit::Fruit(const Fruit &old):Agricultural(old)
{
	sugar=old.sugar;
};
//constructor, its goes to construct Agricultural class first
Fruit::Fruit(int serialNum1,char line1,int shelf1,int quantity1,int productType1,int area1
						   ,string productName1,int productType2,int ripeSeasons1,int numOfSuppliers1,int sugar1)
						   :Agricultural(serialNum1,line1,shelf1,quantity1,productType1,area1,productName1,productType2
								,ripeSeasons1,numOfSuppliers1)
{
	sugar=sugar1;
};
//calculate the price of fruit products(first go to calculate the Agricultural price)
double Fruit::price(int factor)
{
	return Agricultural::price(factor)+sugar/2;
};
//print the details of fruit 
void Fruit::print()
{
	Agricultural::print();//first print the Agricultural details
	cout<<"("<<sugar<<")";
};
//destructor
Fruit::~Fruit()
{
};