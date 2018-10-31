/* alon mar-chaim 305237687 03 Targil4 */

#ifndef _STORE
#define _STORE
#include "Basis.h"
#include "Fruit.h"
#include "Vegetable.h"
#include "Other.h"
#include "Cheese.h"
#include "Drink.h"
#include "Yogurt.h"
#include "Package.h"
#include <iostream>
#include <string>
using namespace std;
//this class hold and control the store details
class Store{
private:
	string name;
	int factor;//publicity factor
	int numOfProducts;//number of products in store
	Basis **products;//arrey of the store products
public:
	Store();//default constructor
	Store(const Store &old);//copy constructor
	Store(string name1,int factor1);//constructor
	void addProduct();//add new product to the arrey
	void quantity(int Quantity1,int serialNum1);//change the Quantity of product
	void changeFactor(int factor1);//change the publicity factor
	void getPrice();//calculate the price of a product
	void totalPrice();//calculate the total price of all the products in store
	void printProduct();//print a product
	void print();// print all the products in store
	~Store();//destructor
};
#endif