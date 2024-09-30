/*program of to swap the two values using template */

#include<iostream>
using namespace std;

		//function template
template<typename T>
swapnumbers(T c, T d)		//swap two numbers
{
	T temp = c;
	c = d;
	d = temp;
	
	cout<<"A : "<<c<<"    B : "<<d<<endl<<endl;
}

main()
{
			//for int type
	cout<<"int VALUES : "<<endl;
	cout<<"A : 5    B : 10"<<endl;
	
	cout<<"After Swapping : "<<endl;
	swapnumbers<int>(5,10);		//call the template function
	
			//for float type
	cout<<"float VALUES : "<<endl;
	cout<<"A : 2.45    B : 61.9"<<endl;
	
	cout<<"After Swapping : "<<endl;
	swapnumbers<float>(2.45,61.9);		//call the template function
	
			//for string type
	cout<<"string VALUES : "<<endl;
	cout<<"A : kya    B : hua"<<endl;
	
	cout<<"After Swapping : "<<endl;
	swapnumbers<string>("kya","hua");		//call the template function
}

