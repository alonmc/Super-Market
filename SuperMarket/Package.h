/* alon mar-chaim 305237687 03 Targil4 */

#ifndef _PACKAGE
#define _PACKAGE
#include "Basis.h"
#include <iostream>
#include <string>
using namespace std;
//this class hold the details of Packages
class Package: public Basis
{
private:
	int numOfProducts;
	string *nameOfProducts;
	int colors;
public:
	Package();//default constructor
	Package(const Package &old);//copy constructor
	Package(int serialNum1,char line1,int shelf1,int quantity1,int productType1,int area1
		,int numOfProducts,string *nameOfProducts,int colors);//constructor
	virtual double price(int factor);//calculate the price of Packages(first go to calculate the basic price)
	virtual void print();//print the details of the Package
	virtual ~Package();//destructor
};
#endif