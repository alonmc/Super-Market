/* alon mar-chaim 305237687 03 Targil4 */

#ifndef _DAIRY
#define _DAIRY
#include "Basis.h"
#include <iostream>
#include <string>
using namespace std;
//this class hold the Dairy details of Dairy products
class Dairy: public Basis
{
private:
	int productType;
	string productName1,productName2;
	int color;
	int fat;
public:
	Dairy();//default constructor
	Dairy(const Dairy &old);//copy constructor
	Dairy(int serialNum1,char line1,int shelf1,int quantity1,int productType1,int area1
						   ,int productType2,string productName11,string productName22,int color1,int fat1);//constructor
	virtual double price(int factor);//calculate the price of Dairy products(first go to calculate the basic price)
	virtual void print();//print the Dairy details of the product
	virtual ~Dairy();//destructor
};
#endif