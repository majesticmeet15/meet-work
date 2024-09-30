/*program to Mathematic operation like Addition, Subtraction, Multiplication, Division Of 
two number using different parameters and Function Overloading */

#include<iostream>
using namespace std;

class Mathematics{
	
	public:
					//member functions
					//Function Overloading
					
		operation(int a,int b)		//Addition
		{
			cout<<"Addition :"<<a+b<<endl;
		}

		operation(float a,int b)	//Subtraction
		{
			cout<<"Subtraction :"<<a-b<<endl;
		}
		
		operation(int a,float b)	//Multiplication
		{
			cout<<"Multiplication :"<<a*b<<endl;
		}
		
		operation(float a,float b)	//Division
		{
			cout<<"Division :"<<char(246)<<a/b<<endl;  
		}
};

main()
{	
	Mathematics m; 		//object creation
	
	float c,d;
				//user inputs
	cout<<"Enter a Number A : ";
	cin>>c;
	cout<<"Enter a Number B : ";
	cin>>d;
	
			//call member functions	
	m.operation(static_cast<int>(c),static_cast<int>(d));	//type conversion
	m.operation(c,static_cast<int>(d));
	m.operation(static_cast<int>(c),d);
	m.operation(c,d);
}
