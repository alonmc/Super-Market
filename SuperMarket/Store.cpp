/* alon mar-chaim 305237687 03 Targil4 */

#include "Store.h"
#include <iostream>
#include <string>
using namespace std;
//this class hold and control the store details
//default constructor
Store::Store()
{
	name="SuperShop";
	factor=3;
	numOfProducts=0;
	products=NULL;
};
//copy constructor
Store::Store(const Store &old)
{
	name="SuperShop";
	factor=old.factor;
	numOfProducts=old.numOfProducts;
	products=new Basis*[numOfProducts];
	//the for runs on the arrey and check the specific type of each product and then he appley the products copy constructor
	for(int i=0;i<numOfProducts;i++)
	{
		if(strcmp (typeid(*old.products[i]).name(),typeid(Vegetable).name()))
		{
			products[i]=new Vegetable(*(Vegetable*)(old.products[i]));
		}
		else if(strcmp (typeid(*old.products[i]).name(),typeid(Fruit).name()))
		{
			products[i]=new Fruit(*(Fruit*)(old.products[i]));
		}
		else if(strcmp (typeid(*old.products[i]).name(),typeid(Package).name()))
		{
			products[i]=new Package(*(Package*)(old.products[i]));
		}
		else if(strcmp (typeid(*old.products[i]).name(),typeid(Cheese).name()))
		{
			products[i]=new Cheese(*(Cheese*)(old.products[i]));
		}
		else if(strcmp (typeid(*old.products[i]).name(),typeid(Other).name()))
		{
			products[i]=new Other(*(Other*)(old.products[i]));
		}
		else if(strcmp (typeid(*old.products[i]).name(),typeid(Drink).name()))
		{
			products[i]=new Drink(*(Drink*)(old.products[i]));
		}
		else if(strcmp (typeid(*old.products[i]).name(),typeid(Yogurt).name()))
		{
			products[i]=new Yogurt(*(Yogurt*)(old.products[i]));
		}
	}
};
//constructor
Store::Store(string name1,int factor1)
{
	name=name1;
	factor=factor1;
	numOfProducts=0;
	products=NULL;
};
//add new product to the arrey
void Store::addProduct()
{
	int tmp,serialNum1,shelf1,quantity1,productType1,area1,productType2,color1,fat1,extras1,ripeSeasons1;
	int vitamins1,nonDairy1,numOfSuppliers1,sugar1;
	char line1;
	Basis **tmpP;
	string productName1,productName2;
	string *nameOfProducts1 = NULL;
	cout<<"please choose the product you want to add:"<<endl<<"1.vegetable"<<endl<<"2.fruit"<<endl<<"3.package"
			<<endl<<"4.drink product"<<endl<<"5.yogurt"<<endl<<"6.cheese"<<endl<<"7.other dairy product"<<endl;
	cin>>tmp;
	if(tmp<1||tmp>7)
	{
		 throw string("wrong key");
	}
	//this switch goes to the selected type of product and gets from user all the product details
	switch(tmp)
	{
	//vegetable
	case 1:
		cout<<"please insert product details by this order:"<<endl<<"serial Number,line(A-Z),shelf(1-5),quantity"
			<<",product Type(1-agricultural,2-dairy,3-package),area(1-3),product name,product type(1-vegetable,2-fruit)"
			<<",ripe seasons(1-4),number of suppliers,vitamins amount"<<endl;
		cin>>serialNum1>>line1>>shelf1>>quantity1>>productType1>>area1>>productName1>>productType2>>ripeSeasons1
			>>numOfSuppliers1>>vitamins1;
		//the if checks if the input was valid
		if((serialNum1<0)||(shelf1<1 || shelf1>5)||(line1<'A' || line1>'Z')||(quantity1<0)||(productType1!=1)
			||(area1<1 || area1>3)||(productType2!=1)||(numOfSuppliers1<0)||(vitamins1<0)||(ripeSeasons1<1 || ripeSeasons1>4))
		{
			throw string("wrong input");
		}
		break;
	//fruit
	case 2:
		cout<<"please insert product details by this order:"<<endl<<"serial Number,line(A-Z),shelf(1-5),quantity"
			<<",product Type(1-agricultural,2-dairy,3-package),area(1-3),product name,product type(1-vegetable,2-fruit)"
			<<",ripe seasons(1-4),number of suppliers,sugar amount"<<endl;
		cin>>serialNum1>>line1>>shelf1>>quantity1>>productType1>>area1>>productName1>>productType2>>ripeSeasons1
			>>numOfSuppliers1>>sugar1;
		//the if checks if the input was valid
		if((serialNum1<0)||(shelf1<1 || shelf1>5)||(line1<'A' || line1>'Z')||(quantity1<0)||(productType1!=1)
			||(area1<1 || area1>3)||(productType2!=2)||(numOfSuppliers1<0)||(sugar1<0)||(ripeSeasons1<1 || ripeSeasons1>4))
		{
			throw string("wrong input");
		}
		break;
	//package
	case 3:
		cout<<"please insert product details by this order:"<<endl<<"serial Number,line(A-Z),shelf(1-5),quantity"
			<<",product Type(1-agricultural,2-dairy,3-package),area(1-3),number of producs,products in package,colors"<<endl;
		cin>>serialNum1>>line1>>shelf1>>quantity1>>productType1>>area1>>nonDairy1;
		nameOfProducts1=new string[nonDairy1];
		for (int i=0;i<nonDairy1;i++)
			cin>>nameOfProducts1[i];
		cin>>color1;
		//the if checks if the input was valid
		if((serialNum1<0)||(shelf1<1 || shelf1>5)||(line1<'A' || line1>'Z')||(quantity1<0)||(productType1!=3)
			||(area1<1 || area1>3)||(nonDairy1<0)||(color1<0))
		{
			throw string("wrong input");
		}
		break;
	//drink
	case 4:
		cout<<"please insert product details by this order:"<<endl<<"serial Number,line(A-Z),shelf(1-5),quantity"
			<<",product Type(1-agricultural,2-dairy,3-package),area(1-3),product name"
			<<",product type(1-drink,2-yogurt,3-cheese,3-other dairy),colors,fat"<<endl;
		cin>>serialNum1>>line1>>shelf1>>quantity1>>productType1>>area1>>productName1>>productName2
			>>productType2>>color1>>fat1;
		//the if checks if the input was valid
		if((serialNum1<0)||(shelf1<1 || shelf1>5)||(line1<'A' || line1>'Z')||(quantity1<0)||(productType1!=2)
			||(area1<1 || area1>3)||(productType2!=1)||(fat1<0)||(color1<0))
		{
			throw string("wrong input");
		}
		break;
	//yogurt
	case 5:
		cout<<"please insert product details by this order:"<<endl<<"serial Number,line(A-Z),shelf(1-5),quantity"
			<<",product Type(1-agricultural,2-dairy,3-package),area(1-3),product name"
			<<",product type(1-drink,2-yogurt,3-cheese,3-other dairy),colors,fat"<<endl;
		cin>>serialNum1>>line1>>shelf1>>quantity1>>productType1>>area1>>productName1>>productName2>>productType2
			>>color1>>fat1;
		//the if checks if the input was valid
		if((serialNum1<0)||(shelf1<1 || shelf1>5)||(line1<'A' || line1>'Z')||(quantity1<0)||(productType1!=2)
			||(area1<1 || area1>3)||(productType2!=2)||(fat1<0)||(color1<0))
		{
			throw string("wrong input");
		}
		break;
	//cheese
	case 6:
		cout<<"please insert product details by this order:"<<endl<<"serial Number,line(A-Z),shelf(1-5),quantity"
			<<",product Type(1-agricultural,2-dairy,3-package),area(1-3),product name"
			<<",product type(1-drink,2-yogurt,3-cheese,3-other dairy),colors,fat,extras"<<endl;
		cin>>serialNum1>>line1>>shelf1>>quantity1>>productType1>>area1;
		cin>>productName1>>productName2>>productType2>>color1>>fat1>>extras1;
		//the if checks if the input was valid
		if((serialNum1<0)||(shelf1<1 || shelf1>5)||(line1<'A' || line1>'Z')||(quantity1<0)||(productType1!=2)
			||(area1<1 || area1>3)||(productType2!=3)||(fat1<0)||(color1<0)||(extras1<0))
		{
			throw string("wrong input");
		}
		break;
	//other dairy product 
	case 7:
		cout<<"please insert product details by this order:"<<endl<<"serial Number,line(A-Z),shelf(1-5),quantity"
			<<",product Type(1-agricultural,2-dairy,3-package),area(1-3),product name"
			<<",product type(1-drink,2-yogurt,3-cheese,3-other dairy),colors,fat,number of non Dairy,non Dairy producs"<<endl;
		cin>>serialNum1>>line1>>shelf1>>quantity1>>productType1>>area1;
		cin>>productName1>>productName2>>productType2>>color1>>fat1>>nonDairy1;
		nameOfProducts1=new string[nonDairy1];
		for (int i=0;i<nonDairy1;i++)
			cin>>nameOfProducts1[i];
		//the if checks if the input was valid
		if((serialNum1<0)||(shelf1<1 || shelf1>5)||(line1<'A' || line1>'Z')||(quantity1<0)||(productType1!=2)
			||(area1<1 || area1>3)||(productType2!=4)||(fat1<0)||(color1<0)||(nonDairy1<0))
		{
			throw string("wrong input");
		}
		break;
	default:
		break;
	}
	////the for checks if the product already exist in the store
	for (int i=0;i<numOfProducts;i++)
	{
		if(serialNum1==products[i]->getSerialNum())
		{
			 throw string("product already exist");
		}	
	}
	//expand/creating the arrey
	numOfProducts++;
	if(numOfProducts==1)
	products=new Basis*[numOfProducts];
	else
	{
		tmpP=products;
		products=new Basis*[numOfProducts];
		//copy the old arrey to the new
		for (int i=0;i<numOfProducts-1;i++)
			products[i]=tmpP[i];
		tmpP=NULL;	
	}
	//this switch goes to the selected type of product and creates it in the arrey
	switch(tmp)
	{
	//vegetable			
	case 1:	
		products[numOfProducts-1]=new Vegetable(serialNum1,line1,shelf1,quantity1,productType1,area1,productName1,productType2
												,ripeSeasons1,numOfSuppliers1,vitamins1);
		cout<<"add succeed"<<endl;
		break;
	//fruit 
	case 2:		
		products[numOfProducts-1]=new Fruit(serialNum1,line1,shelf1,quantity1,productType1,area1,productName1,productType2
											,ripeSeasons1,numOfSuppliers1,sugar1);
		cout<<"add succeed"<<endl;
		break;
	//package 
	case 3:
		products[numOfProducts-1]=new Package(serialNum1,line1,shelf1,quantity1,productType1,area1,nonDairy1,nameOfProducts1,color1);									
		nameOfProducts1=NULL;
		cout<<"add succeed"<<endl;
		break;
	//drink 
	case 4:
		products[numOfProducts-1]=new Drink(serialNum1,line1,shelf1,quantity1,productType1,area1,productType2
											,productName1,productName2,color1,fat1);
		cout<<"add succeed"<<endl;
		break;
	//yogurt
	case 5:
		products[numOfProducts-1]=new Yogurt(serialNum1,line1,shelf1,quantity1,productType1,area1,productType2
											,productName1,productName2,color1,fat1);
		cout<<"add succeed"<<endl;
		break;
	//cheese 
	case 6:
		products[numOfProducts-1]=new Cheese(serialNum1,line1,shelf1,quantity1,productType1,area1,productType2
											,productName1,productName2,color1,fat1,extras1);
		cout<<"add succeed"<<endl;
		break;
	//other dairy product 
	case 7:
		products[numOfProducts-1]=new Other(serialNum1,line1,shelf1,quantity1,productType1,area1,productType2
											,productName1,productName2,color1,fat1,nonDairy1,nameOfProducts1);
		cout<<"add succeed"<<endl;
		nameOfProducts1=NULL;
		break;	
	default:
		break;
	}
};
//change the publicity factor
void Store::changeFactor(int factor1)
{
	factor=factor1;
};
//change the Quantity of product
void Store::quantity(int Quantity1, int serialNum1)
{
	if(numOfProducts==0)
		throw string("no products in store");
	int i;
	//the for runs on the arrey and check if the product exist,if exist it change his Quantity
	for(i=0;i<numOfProducts;i++)
	{
		if(serialNum1==products[i]->getSerialNum())
		{
			products[i]->changeQuantity(Quantity1);
			i=-1;
			break;
		}
	}
	if(i!=-1)
		cout<<"product not exist"<<endl;
};
//calculate the price of a product
void Store::getPrice()
{
	if(numOfProducts==0)
		throw string("no products in store");
	int i,option;
	cout<<"insert serial Number"<<endl;
	cin>>option;
	//the for runs on the arrey and check if the product exist,if exist it print the price
	for(i=0;i<numOfProducts;i++)
	{
		if(option==products[i]->getSerialNum())
		{
			cout<<products[i]->price(factor)<<endl;
			i=-1;
			break;
		}
	}
	if(i!=-1)
		cout<<"product not exist"<<endl;
};
//calculate the total price of all the products in store
void Store::totalPrice()
{
	if(numOfProducts==0)
		throw string("no products in store");
	double sum=0;
	//the for runs on the arrey, calculate the price of all products and sums them all
	for (int i=0;i<numOfProducts;i++)
	{
		sum=sum+(products[i]->price(factor));
	}
	cout<<sum<<endl;
};
//print a product
void Store::printProduct()
{
	if(numOfProducts==0)
		throw string("no products in store");
	int option,flag=0;
	cout<<"insert serial Number"<<endl;
	cin>>option;
	//the for runs on the arrey and check if the product exist,if exist it print the product
	for(int i=0;i<numOfProducts;i++)
	{
		if(option==products[i]->getSerialNum())
		{
			products[i]->print();
			cout<<endl;
			flag=1;
			break;
		}
	}
	if(flag==0)
		cout<<"product not found"<<endl;
};
// print all the products in store
void Store::print()
{
	cout<<name<<"("<<numOfProducts<<","<<factor<<")"<<endl;
	//the for runs on the arrey, and print all the products in store and the store details
	for (int i=0;i<numOfProducts;i++)
	{
		products[i]->print();
		cout<<endl;
	}
};
//destrutor
Store::~Store()
{
	for(int i=0;i<numOfProducts;i++)
	{
		delete products[i];
	}
	delete[] products;//delete the products
};