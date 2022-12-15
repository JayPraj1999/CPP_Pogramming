#include<iostream>
using namespace std;

class mathematic
{
	public :
		char ch;
		int a,b,ans;
		
		void math(int a, int b)
		{
			
			ans = a + b;
			cout<<"Addition is : "<<ans<<endl;
				
		}
		
		void math(char c,int a, int b)
		{	
			
			ans = a - b;
			 cout<<"Subtraction is : "<<ans<<endl;
				
		}
		
		void math(int a, char c, int b)
		{	
			
			ans = a * b;
			cout<<"Multiplication is : "<<ans<<endl;
				
		}
		
		void math(int a, int b, char c)
		{	
			
			ans = a / b;
			cout<<"Division is : "<<ans<<endl;
				
		}
};

int main()
{
	
	int choice,a,b;
	char sub,multi,div;
	sub = '-';
	multi = '*';
	div = '/';
	mathematic m;
	
	cout<<"Press 1 for Addition : "<<endl;
	cout<<"Press 2 for Subtraction : "<<endl;
	cout<<"Press 3 for Multiplication : "<<endl;
	cout<<"Press 4 for Divison : "<<endl;
	cout<<"Enter your choice : ";
	cin>>choice;
	
	cout<<"Enter Value of A : ";
	cin>>a;
	cout<<"Enter Value of B : ";
	cin>>b;
	
	switch(choice)
	{
		case 1:
			{
				m.math(a,b);
			}
		break;
		
		case 2:
			{
				m.math('-',a,b);
			}
		break;
		
		case 3:
			{
				m.math(a,'*',b);
			}
		break;
		
		case 4:
			{
				m.math(a,b,',');
			}
		break;
		
		default :
			{
				cout<<"Invalid Choice : "<<endl;
			}
	}
	
	
	return 0;
}