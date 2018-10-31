/* alon mar-chaim 305237687 03 Targil4 */

#ifndef _BASIS
#define _BASIS
#include <iostream>
#include <string>
using namespace std;
//this class holds the basic details of the products
class Basis{
private:
	int serialNum;
	char line;//the line that the products in
	int shelf;//the shelf that the products in
	int quantity;//the amount of the product in the store
	int productType;
	int area;//the area the product is at the store
public:
	Basis();//default constructor
	Basis(const Basis &old);//copy constructor
	Basis(int serialNum1,char line1,int shelf1,int quantity1,int productType1,int area1);//constructor
	virtual double price(int factor);//calculate the basic price of all products
	int getSerialNum();//return the serial number
	void changeQuantity(int quantity1);//change the Quantity of a product
	virtual void print();//print the basic details of the product
	virtual ~Basis();//destructor
};
#endif