#include<iostream>
using namespace std;

class Bank{
	public:
		
	int choise, balance=5000,depo, wth;
	acopen()
		{
		string name;
		int acno;
		int depo,wth;
			cout<<"Name : ";
			cin>>name;
			cout<<"Ac no : ";
			cin>>acno;
			
		}
	
		fun()
		{
			int i;
		  for(i=0;i<=0;i--)
		  {
		  	cout<<"enter 1 for view balance "<<endl;
		cout<<"enter 2 to deposit "<<endl;
		cout<<"enter 3 to withraw"<<endl;
		cout<<"enter 4 for exit "<<endl<<endl;
		
		cout<<"Enter your choise :";
		cin>>choise;
		break;
		if(choise==1)
		{
		cout<<"Balance is : "<<balance<<endl<<endl;
			break;
			break;
			
		}
		 else if(choise<=2)
		{	
			cout<<"Enter amount for deposit : ";
			cin>>depo;
			
			this->depo = depo;
			
			this->balance=this->balance+this->depo;
			
			cout<<"Now your balance is : "<<this->balance<<endl;
			break;
				
		}
		else if(choise==3)
		{	
			cout<<"Enter amout to withdraw : ";
			cin>>wth;
			
			this->wth=wth;
			
			this->balance=this->balance-this->wth;
			
			cout<<"Now your balance is : "<<this->balance<<endl;
			break;
		}
		else if (choise==4)
		{
			cout<<"Exit";
			break;
		}
		else(choise<=4);
		{
			cout<<"Invalid choise"<<endl<<endl;
			break;
		}
	}
		
		}
		fun1()
		{
			
		}
		           
	

		
		deposit()
		{
			int depo;
			
			cout<<"Enter amount for deposit : ";
			cin>>depo;
			
			this->depo = depo;
			
			this->balance=this->balance+this->depo;
			
			cout<<"Now your balance is : "<<this->balance<<endl;
		}
		withdraw()
		{
			int wth;
			
			cout<<"Enter amout to withdraw : ";
			cin>>wth;
			
			this->wth=wth;
			
			this->balance=this->balance-this->wth;
			
			cout<<"Now your balance is : "<<this->balance;
		}
};

main()
{
	
	Bank obj;
	obj.acopen();
	obj.fun();
	obj.fun1();
	
	obj.deposit();
	obj.withdraw();
}
