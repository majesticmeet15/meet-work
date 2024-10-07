#include<iostream> 
using namespace std;

class A{
	public:
		int a,b;
		fun1()
		{
			cout<<"enter number 1: ";
			cin>>a;		
			cout<<"enter number 2: ";
			cin>>b;
			cout<<"addition :"<<a+b<<endl;
		}
};
class B{
	public:
		int a,b;
		fun2()
		{
			cout<<"enter number 1: ";
			cin>>a;		
			cout<<"enter number 2: ";
			cin>>b;
			cout<<"subtraction :"<<a-b<<endl;
		}
};
class C{
	public:
		int a,b;
		fun3()
		{
			cout<<"enter number 1: ";
			cin>>a;		
			cout<<"enter number 2: ";
			cin>>b;
			cout<<"multiplication :"<<a*b<<endl;
		}
};				

main()
{
	A obj;
	obj.fun1();
	
	B obl;
	obl.fun2();
	
	C obi;
	obi.fun3();	
}
