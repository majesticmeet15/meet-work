#include<iostream>
using namespace std;

class Emplyee{  //abstraction class
	public:
		info()
		{
			cout<<"Your salary is transfered to your Acc!!"<<endl;
		}
		virtual salary()=0;// pure virtual function
};
class Nishit:public Emplyee{
	public:
		salary()
		{
			cout<<"Nishit got 20k"<<endl;
		}
};
class Meet:public Emplyee{
	public:
		salary()
		{
			cout<<"Meet got 15k"<<endl;
		}
};
class Rahul:public Emplyee{
	public:
		salary()
		{
			cout<<"Rahul got 20k"<<endl;
		}
};

main()
{
	Nishit obj;
	obj.info();
	obj.salary();
	
	Meet obj1;
	obj1.info();
	obj1.salary();
	
	Rahul obj2;
	obj2.info();
	obj2.salary();
}
