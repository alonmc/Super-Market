/* alon mar-chaim 305237687 03 Targil4 */

#include "Basis.h"
#include <iostream>
#include <string>
using namespace std;
//this class holds the basic details of the products
//default constructor
Basis::Basis()
{
	serialNum=0;
	line='a';
	shelf=0;
	quantity=0;
	productType=0;
	area=0;
};
//copy constructor
Basis::Basis(const Basis &old)
{
	serialNum=old.serialNum;
	line=old.line;
	shelf=old.shelf;
	quantity=old.quantity;
	productType=old.productType;
	area=old.area;
};
//constructor
Basis::Basis(int serialNum1,char line1,int shelf1,int quantity1,int productType1,int area1)
{
	serialNum=serialNum1;
	line=line1;
	shelf=shelf1;
	quantity=quantity1;
	productType=productType1;
	area=area1;
};
//calculate the basic price of all products
double Basis::price(int factor)
{
	return quantity*area*factor;
};
//return the serial number
int Basis::getSerialNum()
{
	return serialNum;
};
//change the Quantity of a product
void Basis::changeQuantity(int quantity1)
{
	quantity=quantity1;
};
//print the basic details of the product
void Basis::print()
{
	cout<<serialNum<<" "<<line<<" "<<shelf<<"("<<quantity<<","<<productType<<","<<area<<")";
};
//destructor
Basis::~Basis()
{
};