#include<iostream>
using namespace std;

template<typename Wellcome>
Wellcome greatest (Wellcome a,Wellcome b)
{
	if(a<b)
	{
		cout<<"A is greatest"<<endl;
	}
	else
	{
		cout<<"B is greatest"<<endl;
	}
}
main()
{
	greatest<int>(20,30);
	greatest<char>('a','A');
}
