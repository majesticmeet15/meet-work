#include<iostream>
using namespace std;

class A{
	public:	
		name()
		{
		    int a;	   
			cout<<"enter name : ";
			cin>>a;
		}
};
class B:public A{
	public:
		subjects()
		{
			int a;	   
			cout<<"maths enter marks : ";
			cin>>a;
//			int m,e,s;
//			cout<<"maths enter marks :"<<endl;
//			cin>>m;
//			cout<<"english enter marks :"<<endl;
//			cin>>e;
//			cout<<"science enter marks :"<<endl;
//			cin>>s;
		}
};


main()
{
	B obj;
	obj.name();
	obj.subjects();
	
}
