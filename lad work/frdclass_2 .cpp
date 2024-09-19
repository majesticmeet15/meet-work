#include<iostream>
using namespace std;

class A{
	private:
		int a,b;
		
		friend class B;
};
class B{
	public:
		show(A& obj)
		{
			cout<<"enter number : ";
			cin>>obj.a;
			cout<<"enter number : ";
			cin>>obj.b;
			
			cout<<"Addition : "<<obj.a+obj.b;
		}
};

main()
{
	A obj;
	B obj1;
	obj1.show(obj);
}
