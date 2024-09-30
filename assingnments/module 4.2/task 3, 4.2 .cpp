//WAP to create simple calculator using class 

#include<iostream>
using namespace std;

class Calculator // class creation 
{
	public:
	
	int a,b;	// data members
		
	//member functions
	add(int a,int b)
	{
		cout<<endl<<"Addition :"<<a+b;		
	}	
	
	sub(int a,int b)
	{
		cout<<endl<<"Subtraction :"<<a-b;		
	}	
	
	mul(int a,int b)
	{
		cout<<endl<<"Mulpliction :"<<a*b;		
	}	
	
	div(int a,int b)
	{
		cout<<endl<<"Division :"<<(a)/b;		
	}	
};

main()
{
	Calculator c ;		//object declaration
	cout<<"Enter Number A : ";
	cin>>c.a;
	cout<<"Enter Number B : ";
	cin>>c.b;
	
	//call member functions
	c.add(c.a,c.b);			
	c.sub(c.a,c.b);
	c.mul(c.a,c.b);
	c.div(c.a,c.b);
}


