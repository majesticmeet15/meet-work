#include<iostream>
using namespace std;

class Hello{
	public:
		Hello()//constructor
		{
			cout<<"Welcome to our website !!!"<<endl;
		}
		
		reverse()
		{
			int n,rev,res=0;
			
			cout<<"enter number : ";
			cin>>n;
			
			while(n!=0)
			{
				res = n%10;
				rev = rev*10+res;
				n/=10;
			}
			cout<<"Reverse number is : "<<rev<<endl;
		}
		~Hello()//destructor
		{
			cout<<"Thank you for using our wesite !!!";
		}
};

main()
{
   Hello obj;
   obj.reverse();
}
