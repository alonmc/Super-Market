/* alon mar-chaim 305237687 03 Targil4 */

#ifndef _FRUIT
#define _FRUIT
#include "Agricultural.h"
#include <iostream>
#include <string>
using namespace std;
//this class hold the details of fruit products
class Fruit: public Agricultural 
{
private:
	int sugar;
public:
	Fruit();//default constructor
	Fruit(const Fruit &old);//copy constructor
	Fruit(int serialNum1,char line1,int shelf1,int quantity1,int productType1,int area1
						   ,string productName1,int productType2,int ripeSeasons1,int numOfSuppliers1,int sugar1);//constructor
	virtual double price(int factor);//calculate the price of fruit products(first go to calculate the Agricultural price)
	virtual void print();//print the details of fruit 
	virtual ~Fruit();//destructor
};
#endif