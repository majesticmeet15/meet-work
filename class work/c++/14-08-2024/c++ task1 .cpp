#include<iostream>
using namespace std;
class A{
	public:
		int a,b;
		show()
		{
			cout<<"enter number 1: ";
			cin>>a;		
			cout<<"enter number 2: ";
			cin>>b;
		}
		fun1()
		{
			cout<<"addition :"<<a+b<<endl;
		}
		fun2()
		{
			cout<<"subtraction :"<<a-b<<endl;
		}
		fun3()
		{
			cout<<"multiplication :"<<a*b<<endl;
		}
};

main()
{
	A obj; //object creation 
	obj.show();
	obj.fun1();
	obj.fun2();
	obj.fun3();
}
