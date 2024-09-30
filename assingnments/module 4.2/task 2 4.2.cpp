//Write a program of Addition, Subtraction, Division, Multiplication using constructor.
#include<iostream>
using namespace std;

class A{
	public:
		fun1(int a,int b)
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
		fun2(int c,int d)
		{
			cout<<"enter number 1: ";
			cin>>c;		
			cout<<"enter number 2: ";
			cin>>d;
			cout<<"subtraction :"<<c-d<<endl<<endl;
		}
};
class C{
	public:
		fun3(int e,int f)
		{
			cout<<"enter number 1: ";
			cin>>e;		
			cout<<"enter number 2: ";
			cin>>f;
			cout<<"multiplication :"<<e*f<<endl<<endl;
		}
};
class D{
	public:
		fun4(int g,int h)
		{
			cout<<"enter number 1: ";
			cin>>g;		
			cout<<"enter number 2: ";
			cin>>h;
			cout<<"division : "<<g/h<<endl<<endl;
			
		}
};
main()
{
	A obj (10,20);
	B obi (20,10);
	C obl (15,2);
	D obk (50,2);
	
}				
