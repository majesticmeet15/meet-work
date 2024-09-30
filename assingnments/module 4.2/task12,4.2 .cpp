/*program to calculate the area of circle, rectangle and triangle using Function Overloading 
Rectangle: length * breadth 
Triangle: ? * Base* Height 
Circle: Pi * Radius * Radius*/

#include<iostream>
using namespace std;

class AreaRTC{
	
	public:
					//member functions
					//Function overloading
							
		Area(int a,int b)				//Find Area of Rectangle
		{
			cout<<"AREA OF RECTANGLE : "<<a*b<<endl<<endl;
		}
		
		Area(float a,int b,int c)		//Find Area of Triangle
		{
			cout<<"AREA OF TRIANGLE  : "<<a*b*c<<endl<<endl;
		}
		
		Area(int Radius)				//Find Area of Circle
		{
			float pi=3.14;
			cout<<"AREA OF CIRCLE    : "<<pi*Radius*Radius<<endl<<endl;
		}
};

main()
{
	AreaRTC a;			//create object of class
	
	int c,d;
					//user inputs for Rectangle
	cout<<"Enter Ractangle Details : "<<endl;
	cout<<"Length : ";
	cin>>c;
	cout<<"Breath : ";
	cin>>d;
	
	a.Area(c,d); 	//call member function
	
					//user inputs for Triangle
	cout<<"Enter Triangle Details  : "<<endl;
	cout<<"Base   : ";
	cin>>c;
	cout<<"Heigth : ";
	cin>>d;
	
	a.Area(0.5,c,d);	//member function call
	
						//user input for circle
	cout<<"Enter Circle Details    : "<<endl;
	cout<<"Radius   : ";
	cin>>c;
	
	a.Area(c);			//member function call
}


