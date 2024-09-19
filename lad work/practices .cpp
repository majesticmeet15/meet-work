#include<iostream>
using namespace std;

template<typename Meet>
Meet greatest (Meet a,Meet b)
{
	if(a<b)
	{
		cout<<"A is greatest !!"<<endl;
	}
	else
	{
		cout<<"B is greatest !!"<<endl;
	}
}
main()
{
	greatest<int>(10,20);
	greatest<char>('a','A');
}
















//#include<iostream>
//using namespace std;
//
//class A{
//	private:
//		int a,b;
//		
//		friend class B;
//};
//class B{
//	public:
//		show(A& obj)
//		{
//			cout<<"enter no. : ";
//			cin>>obj.a;
//			cout<<"enter no. : ";
//			cin>>obj.b;
//			
//			cout<<"Addition : "<<obj.a+obj.b;
//		}
//};
//main()
//{
//	A obj;
//	B obj1;
//	obj1.show(obj);
//}
