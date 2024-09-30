//program to find the multiplication values and the cubic values using inline function 

#include<iostream>
using namespace std;

class Cubic{
	
	public:
			// create inline function for multiplication
	inline multiplication(int a,int b)
	{
		return a*b;
	}
			// create inline function for cube.
	inline cube(int c)
	{
		return c*c*c; 
	}
};

main()
{
	Cubic c; //object creation
	
	int a,b;
			//user inputs
	cout<<"Enter Number A : ";
	cin>>a;
	cout<<"Enter Number B : ";
	cin>>b;
	
			//muliplication and cube using inline functions 
	cout<<"Multiplication :"<<c.multiplication(a,b)<<endl;
	cout<<"cube of A : "<<c.cube(a)<<endl;
	cout<<"cube of B : "<<c.cube(b);
}


