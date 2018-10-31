/* alon mar-chaim 305237687 03 Targil4 */

#ifndef _AGRICULTURAL
#define _AGRICULTURAL
#include "Basis.h"
#include <iostream>
#include <string>
using namespace std;
//this class hold the Agricultural details of Agricultural products
class Agricultural: public Basis
{
private:
	int productType;
	string productName;
	int ripeSeasons;
	int numOfSuppliers;
public:
	Agricultural();//default constructor
	Agricultural(const Agricultural &old);//copy constructor
	Agricultural(int serialNum1,char line1,int shelf1,int quantity1,int productType1,int area1
				,string productName1 ,int productType2,int ripeSeasons1,int numOfSuppliers1);//constructor
	virtual double price(int factor);//calculate the price of Agricultural products(first go to calculate the basic price)
	virtual void print();//print the Agricultural details of the product
	virtual ~Agricultural();//destructor
};
#endif