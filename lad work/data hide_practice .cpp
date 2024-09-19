#include<iostream>
using namespace std;

class A{
	public:
		info()
		{
			cout<<"your salary is in your acc !!"<<endl;
		}
		virtual salary()=0;
};
class Meet:public A{
	public:
		salary()
		{
			cout<<"  Meet- your salary is 20000000k"<<endl;
		}
};
class Bro:public A{
	public:
		salary()
		{
			cout<<"  Bro- your salary is 20000000k"<<endl; 
		}
};
main()
{	
	Meet obj1;
	obj1.info();
	obj1.salary();
	
	Bro obj2;
	obj2.info();
	obj2.salary();
}
