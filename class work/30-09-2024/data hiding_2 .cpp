#include<iostream>
using namespace std;

class Hello{
	public:
		info()
		{
			cout<<"wheel count and wheel colour for vehicals"<<endl;
		}
		virtual wheel()=0;
		virtual colour()=0;
};
class Truck:public Hello{
	public:
		wheel()
		{
			cout<<"Truck, your wheel count is 6"<<endl;
		}
		colour()
		{
			cout<<"Truck, your wheel colour is grey"<<endl;
		}
};
class Car:public Hello{
	public:
		wheel()
		{
			cout<<"Car, your wheel count is 4"<<endl;
		}
		colour()
		{
			cout<<"Car, your wheel colour is black"<<endl;
		}
};
class Bike:public Hello{
	public:
		wheel()
		{
			cout<<"Bike, your wheel count is 2"<<endl;
		}
		colour()
		{
			cout<<"Bike, your wheel colour is brown"<<endl;
		}
};
main()
{
	Truck obj;
	obj.wheel();
	obj.colour();
	
	Car obj1;
	obj1.wheel();
	obj1.colour();
	
	Bike obj2;
	obj2.wheel();
	obj2.colour();
	
}
