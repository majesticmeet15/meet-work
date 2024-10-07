#include<iostream>//hybrid
using namespace std;

class A{
	protected:
		int a,b,c,d;
		
};

class B{
	public:
		helo()
		{
			cout<<"enter c: ";
			cin>>c;
			
			cout<<"C :"<<c;
		}
};

class C{
	public:
	heloo()
	{
		cout<<"enter d : ";
		cin>>d;
		
		cout<<"D : "<<d;
	}
};

class D:public A,public B,public C{
	public:
		hello()
		{
			cout<<"Enter A : ";
			cin>>a;
			cout<<"Enter B : ";
			cin>>b;
			
			cout<<"A : "<<a<<endl;
			cout<<"B : "<<b<<endl;
		}
};

main()
{
	D obj;
	obj.hello();
	obj.helo();
	obj.heloo();
	
}
