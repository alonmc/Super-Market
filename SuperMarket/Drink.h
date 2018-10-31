/* alon mar-chaim 305237687 03 Targil4 */

#ifndef _DRINK
#define _DRINK
#include "Dairy.h"
#include <iostream>
#include <string>
using namespace std;
//this class hold the details of Drinking products
class Drink: public Dairy
{

public:
	Drink();//default constructor
	Drink(const Drink &old);//copy constructor
	Drink(int serialNum1,char line1,int shelf1,int quantity1,int productType1,int area1
						   ,int productType2,string productName11,string productName22,int color1,int fat1);//constructor
	virtual double price(int factor);//calculate the price of drink products(first go to calculate the Dairy price)
	virtual void print();//print the details of drink 
	virtual ~Drink();//destructor
};
#endif