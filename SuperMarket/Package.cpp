/* alon mar-chaim 305237687 03 Targil4 */

#include "Package.h"
#include <iostream>
#include <string>
using namespace std;
//this class hold the details of Packages
//default constructor
Package::Package():Basis()
{
	numOfProducts=0;
	nameOfProducts=NULL;
	colors=0;
};
//copy constructor
Package::Package(const Package &old):Basis(old)
{
	numOfProducts=old.numOfProducts;
	nameOfProducts=new string[numOfProducts];
	for(int i=0;i<numOfProducts;i++)
		nameOfProducts[i]=old.nameOfProducts[i];
	colors=old.colors;
};
//constructor,its goes to construct basis class first
Package::Package(int serialNum1,char line1,int shelf1,int quantity1,int productType1,int area1
				 ,int numOfProducts1,string *nameOfProducts1,int colors1)
				 :Basis(serialNum1,line1,shelf1,quantity1,productType1,area1)
{
	numOfProducts=numOfProducts1;
	nameOfProducts=nameOfProducts1;
	colors=colors1;
};
//calculate the price of Packages(first go to calculate the basic price)
double Package::price(int factor)
{
	return 2*(Basis::price(factor))*numOfProducts+colors/3;
};
//print the details of the Package
void Package::print()
{
	Basis::print();//first print the basic details
	for (int i=0;i<numOfProducts;i++)
			cout<<nameOfProducts[i]<<" ";
	cout<<"("<<numOfProducts<<","<<colors<<")";
};
//destructor
Package::~Package()
{
	delete[] nameOfProducts;
};