//WAP to create simple calculator using class
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
			cout<<"addition :"<<a+b<<endl<<endl;
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
			cout<<"subtraction :"<<a-b<<endl<<endl;
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
			cout<<"multiplication :"<<a*b<<endl<<endl;
		}
};
class D{
	public:
		int a,b,myDoubleNum;
		fun4()
		{
			cout<<"enter number 1: ";
			cin>>a;		
			cout<<"enter number 2: ";
			cin>>b;
			cout<<"division : "<<"double";myDoubleNum = 9.98 <<endl<<endl;
			
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
	
	D obk;
	obk.fun4();
}
  
