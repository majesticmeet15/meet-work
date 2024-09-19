#include<iostream>//hierarchi
using namespace std;

class A{
	protected:
		int a,b;
		int c;
};

class B{
	public:
		Hello()
		{
			cout<<"Hello"<<endl;
		}
};

class C:public A,public B{
	public:
		Hello1()
		{
			cout<<"Enter A : ";
			cin>>a;
			cout<<"Enter B : ";
			cin>>b;
			
			cout<<"A : "<<a<<endl;
			cout<<"B : "<<b<<endl;
		}
};

class D{
	public:
		int c;
		D()
		{
			cout<<"Enter C : ";
			cin>>c;
			
			cout<<"C : "<<c;
		}
	      
};

main()
{
	C obj;
	obj.Hello();
	obj.Hello1();
	
	D obj1;
	
}
