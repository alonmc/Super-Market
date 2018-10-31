/* alon mar-chaim 305237687 03 Targil4 */

#ifndef _VEGETABLE
#define _VEGETABLE
#include "Agricultural.h"
#include <iostream>
#include <string>
using namespace std;
//this class hold the details of Vegetable products
class Vegetable: public Agricultural 
{
private:
	int vitamins;
public:
	Vegetable();//default constructor
	Vegetable(const Vegetable &old);//copy constructor
	Vegetable(int serialNum1,char line1,int shelf1,int quantity1,int productType1,int area1
						   ,string productName1,int productType2,int ripeSeasons1,int numOfSuppliers1,int vitamins1);//constructor
	virtual double price(int factor);//calculate the price of Vegetable products(first go to calculate the Agricultural price)
	virtual void print();//print the details of Vegetable
	virtual ~Vegetable();//destructor
};
#endif