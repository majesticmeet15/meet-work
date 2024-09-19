#include<iostream>
using namespace std;

class Hello{
	public:
		int a,b;
		hello1()
		{
			int a,b;
			cout<<"enter A : ";
			cin>>a;
			cout<<"enter B : ";
			cin>>b;
			this->a=a;
			this->b=b;
		}
		hello2()
		{
			cout<<"A : "<<this->a<<endl;
			cout<<"B : "<<this->b;
		}
};
main()
{
	Hello obj;
	obj.hello1();
	obj.hello2();
}
