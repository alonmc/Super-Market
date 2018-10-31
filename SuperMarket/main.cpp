/* alon mar-chaim 305237687 03 Targil4 */

#include "Store.h"
#include "Basis.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	Store store;
	int option=0,factor1,i;
	while(option!=8)
	{
		cout<<"please choose an option:"<<endl<<"1.add product"<<endl<<"2.print a product"<<endl<<"3.print all products"<<endl
				<<"4.check price"<<endl<<"5.check total price"<<endl<<"6.change store factor"<<endl
				<<"7.change quantity of product"<<endl<<"8.exit"<<endl;	
		cin>>option;
		switch(option)
		{
			//add product
			case 1:
				try
				{
				store.addProduct();
				}
				catch (string errorStr) {
				cerr<<"Error: "<<errorStr<<endl;
				}
				break;
			//print a product
			case 2:
				try
				{
				store.printProduct();
				}
				catch (string errorStr) {
				cerr<<"Error: "<<errorStr<<endl;
				}
					
				break;
			//print all products
			case 3:
				store.print();
				cout<<endl;
				break;
			//check price
			case 4:
				try
				{
					store.getPrice();
				}
				catch (string errorStr) {
					cerr<<"Error: "<<errorStr<<endl;
				}
				break;
			//check total price
			case 5:
				try
				{
					store.totalPrice();
				}
				catch (string errorStr) {
					cerr<<"Error: "<<errorStr<<endl;
				}
				break;
		    //change store factor
			case 6:
				cout<<"enter the new factor"<<endl;
				cin>>factor1;
				store.changeFactor(factor1);
				break;
			//change quantity of product
			case 7:
				cout<<"enter the serial number and then the new quantity"<<endl;
				cin>>factor1>>i;
				try
				{
					store.quantity(i,factor1);
				}
				catch (string errorStr) {
					cerr<<"Error: "<<errorStr<<endl;
				}
				break;
			//exit
			case 8:
				cout<<"bye bye"<<endl;
				break;
			default:
				cout<<"wrong key"<<endl;
				break;
		}
	}
};