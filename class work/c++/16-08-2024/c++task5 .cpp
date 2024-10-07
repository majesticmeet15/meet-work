#include<iostream>
using namespace std;

class A{
	public:
		myfun()
		{
			cout<<"this is parent class"<<endl;
		}
};
class B:public A{
	public:
		myfun1()
		{
			cout<<"this is child class";
		}
};

main()
{
	B obj;
	obj.myfun();
	obj.myfun1();
	
}
