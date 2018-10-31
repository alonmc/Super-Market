/* alon mar-chaim 305237687 03 Targil4 */

#ifndef _CHEESE
#define _CHEESE
#include "Dairy.h"
#include <iostream>
#include <string>
using namespace std;
//this class hold the details of Cheese products
class Cheese: public Dairy
{
private:
	int extras;
public:
	Cheese();//default constructor
	Cheese(const Cheese &old);//copy constructor
	Cheese(int serialNum1,char line1,int shelf1,int quantity1,int productType1,int area1
			  ,int productType2,string productName11,string productName22,int color1,int fat1,int extras1);//constructor
	virtual double price(int factor);//calculate the price of Cheese products(first go to calculate the Dairy price)
	virtual void print();//print the details of cheese 
	virtual ~Cheese();//destructor
};
#endif