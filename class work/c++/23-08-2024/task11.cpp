#include<iostream>
using namespace std;

class A{
	public:
		myfun()
		{
			cout<<"Hello"<<endl;
		}
};
class B{
	public:
		myfun()
		{
			cout<<"Welcome"<<endl;		
		}
};
class C:public A,public B{
	public:
		myfun() //scope resolution
		{
			A::myfun();
			B::myfun();
		    
		    cout<<"WOW";
		}
};
main()
{
	C obj;
	obj.myfun();
}

