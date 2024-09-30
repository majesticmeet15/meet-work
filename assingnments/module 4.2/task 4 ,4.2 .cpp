//Write a program of Addition, Subtraction, Division, Multiplication using constructor. 

#include<iostream>
using namespace std;

class Calculator			//class creation
{
		
	public:
	
	Calculator(int a,int b)		//parameterized constructor
	{
		cout<<endl<<"Addition :"<<a+b;
		cout<<endl<<"Subtraction :"<<a-b;				//Arithmetic operations
		cout<<endl<<"Mulpliction :"<<a*b;
		cout<<endl<<"Division    :"<<(a)/b;
	}
};

main()
{
	int a,b;
				//user inputs
	cout<<"Enter Number A : ";
	cin>>a;
	cout<<"Enter Number B : ";
	cin>>b;
	
	Calculator c(a,b); //create object of the class.
}
