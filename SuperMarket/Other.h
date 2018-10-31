/* alon mar-chaim 305237687 03 Targil4 */

#ifndef _OTHER
#define _OTHER
#include "Dairy.h"
#include <iostream>
#include <string>
using namespace std;
//this class hold the details of Other Dairy products
class Other: public Dairy
{
private:
	int nonDairy;
	string* nonDairyName;
public:
	Other();//default constructor
	Other(const Other &old);//copy constructor
	Other(int serialNum1,char line1,int shelf1,int quantity1,int productType1,int area1,int productType2
		 ,string productName11,string productName22,int color1,int fat1,int nonDairy1,string* nonDairyName1);//constructor					  
	virtual double price(int factor);//calculate the price of other products(first go to calculate the Dairy price)
	virtual void print();//print the details of Other dairy product 
	virtual ~Other();//destructor
};
#endif