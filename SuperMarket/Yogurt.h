/* alon mar-chaim 305237687 03 Targil4 */

#ifndef _YOGURT
#define _YOGURT
#include "Dairy.h"
#include <iostream>
#include <string>
using namespace std;
//this class hold the details of Yogurt products
class Yogurt: public Dairy
{

public:
	Yogurt();//default constructor
	Yogurt(const Yogurt &old);//copy constructor
	Yogurt(int serialNum1,char line1,int shelf1,int quantity1,int productType1,int area1
				 ,int productType2,string productName11,string productName22,int color1,int fat1);//constructor
	virtual double price(int factor);//calculate the price of Yogurt products(first go to calculate the Dairy price)
	virtual void print();//print the details of Yogurt 
	virtual ~Yogurt();//destructor
};
#endif