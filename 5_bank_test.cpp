#include<iostream>
using namespace std;

class bank
{
	public :
		
		string acc_holder_name;
		string acc_type;
		long int acc_number;
		int balance,val;
		char ch;
		
		void assign()
		{
			cout<<"Pleae Enter Account holder name : ";
			cin>>acc_holder_name;
			cout<<"Please Enter Account Number : ";
			cin>>acc_number;	
			cout<<"Please Enter Account type : ";
			cin>>acc_type;
			cout<<"\n\nYour Current balance is 00 "<<endl<<endl;
		}
		
		void deposite()
		{
			cout<<"Please Deposite Your Amount : ";
			cin>>val;
			balance = balance + val;
			cout<<"Your Total Balance is : "<<balance<<endl;
			cout<<"Thanks For The Deposite.\n\n\n";
		}
		
		void withdraw()
		{
		
			cout<<"Would you like to withdraw an amount ? y or n : ";
			cin>>ch;
			cout<<endl<<endl;
			if(ch=='y' || ch=='Y')
			{
			
				cout<<"How Much do you want to Withdraw ? ";
				cin>>val;
				if(balance >= val)
				{
				
					balance = balance - val;
					cout<<"Your Available balance is : "<<balance<<endl<<endl;
				}
				else 
				{
					cout<<"Insufficient Balance."<<endl;
					cout<<"Your Current balance is : "<<balance<<endl<<endl;
				}
				
			}
			else
			{
				exit;
			}
		}
		
		void Display()
		{
			cout<<"Hello "<<acc_holder_name<<endl;
			cout<<"Your Final Amout is : "<<balance<<endl<<endl<<endl;
			cout<<"----------Thank You----------"<<endl;
		}
		
};

int main()
{
	
	bank b;
	b.assign();
	b.deposite();
	b.withdraw();
	b.Display();
	
	
	return 0;
}