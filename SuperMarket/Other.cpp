/* alon mar-chaim 305237687 03 Targil4 */

#include "Other.h"
#include <iostream>
#include <string>
using namespace std;
//this class hold the details of Other Dairy products
//default constructor
Other::Other():Dairy()
{
	nonDairy=0;
	nonDairyName=NULL;
};
//copy constructor
Other::Other(const Other &old):Dairy(old)
{
	nonDairy=old.nonDairy;
	nonDairyName=new string[nonDairy];
	for(int i=0;i<nonDairy;i++)
	nonDairyName[i]=old.nonDairyName[i];
};
//constructor, its goes to construct dairy class first
Other::Other(int serialNum1,char line1,int shelf1,int quantity1,int productType1,int area1,int productType2,
				string productName11,string productName22,int color1,int fat1,int nonDairy1 ,string* nonDairyName1)
						  :Dairy(serialNum1,line1,shelf1,quantity1,productType1,area1
						   ,productType2,productName11,productName22,color1,fat1)
{
	nonDairy=nonDairy1;
	nonDairyName=nonDairyName1;
};
//calculate the price of other products(first go to calculate the Dairy price)
double Other::price(int factor)
{
	return Dairy::price(factor)+5*nonDairy;
};
//print the details of Other dairy product 
void Other::print()
{
	Dairy::print();//first print the Dairy details
	for (int i=0;i<nonDairy;i++)
			cout<<nonDairyName[i]<<" ";
	cout<<"("<<nonDairy<<")";
};
//destructor
Other::~Other()
{
};