#include<iostream>
using namespace std;

class G{
	public:
		home()
		{
			cout<<"Grandfather has a home"<<endl;
		}
};
class F:public G{
	public:
		car()
		{
			cout<<"Father has a car"<<endl;
		}
};
class C:public F{
	public:
		respect()
		{
			cout<<"Child has a respect in the market";
		}
};

main()
{
	C obj;
	obj.home();
	obj.car();
	obj.respect();
	
}
