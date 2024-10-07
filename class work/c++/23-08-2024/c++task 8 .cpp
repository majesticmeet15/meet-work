#include<iostream>
using namespace std;

class A{
	public:
		fun1(int a,int b)
		{
			cout<<"HEllO !"<<endl;
		}
		fun1()
		{
			cout<<"WELCOME !!"<<endl;
		}
		fun1(string a,string b)
		{
			cout<<"WOW !!!";
		}
};

main()
{
	A obj;
	obj.fun1(10,20);
	obj.fun1();
	obj.fun1("Meet","Vanodia");
}
