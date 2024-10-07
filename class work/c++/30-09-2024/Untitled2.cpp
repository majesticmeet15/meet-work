#include<iostream>
using namespace std;

class Image{
	int height,width;
	
	public:
		Image(int h=0,int w=0)
		{
			height=h;//5,6
			width=w;//8,9
		}
		Image operator *(Image &obj)
		{
			Image result;//object result
			
			            //5          6
			result.height=height * obj.height;
			            //8         9
			result.width=width * obj.width;
			
			return result;
		}
		void print()
		{
			cout<<"\n"<<height<<"*"<<width;
		}
};
main()
{
	Image I1 (5,8), I2 (6,9);//object 1,object 2
	
	Image I3 = I1 * I2;//object 3
	
	I3.print();
	
}
