#include<iostream>
using namespace std;

class A{
	private:
		int a,b;
		
		friend show(A& obj);
};
	show(A& obj)
	{
		cout<<"Enter A : ";
		cin>>obj.a;
		cout<<"Enter B : ";
		cin>>obj.b;
		
		cout<<"Addition is : "<<obj.a+obj.b;
	}


main()
{
	A obj;
    show(obj);
}
