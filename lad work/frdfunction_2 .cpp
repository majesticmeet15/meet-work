#include<iostream>
using namespace std;

class A{
	private:
		int a,b;
		
		friend show(A& obj);
};

show(A& obj)
{
	cout<<"enter number : ";
	cin>>obj.a;
	cout<<"enter number : ";
	cin>>obj.b;
	
	cout<<"Subtraction : "<<obj.a-obj.b;
}

main()
{
	A obj;
	show(obj);
}
