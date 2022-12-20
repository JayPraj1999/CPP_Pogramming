#include<iostream>
using namespace std;

class arithmetic {
	public:
		int ans;

		void Add(int a, int b) 
		{
			ans = a + b;
			cout<<"Addition is : "<<ans;
		}
		
		void Sub(int a, int b) 
		{
			ans = a - b;
			cout<<"Subtraction is : "<<ans;
		}
		
		void Multi(int a, int b) 
		{
			ans = a * b;
			cout<<"Multiplication is : "<<ans;
		}
		
		void Div(int a, int b) 
		{
			ans = a / b;
			cout<<"Division is : "<<ans;
		}
		
};

int main() 
{
	int x,y,choice;
	arithmetic obj;
	cout<<"Enter value of A : ";
	cin>>x;
	cout<<"Enter value of B : ";
	cin>>y;
	
	cout<<"Press 1 for Addition."<<endl;
	cout<<"Press 2 for Subtraction."<<endl;
	cout<<"Press 3 for Multiplication."<<endl;
	cout<<"Press 4 for Division."<<endl;
	cout<<"What would you like to perform : ";
	cin>>choice;
	
	switch(choice)
	{
		case 1:
			{
				obj.Add(x,y);
			}
		break;
		case 2:
			{
				obj.Sub(x,y);
			}
		break;
		case 3:
			{
				obj.Multi(x,y);
			}
		break;
		case 4:
			{
				obj.Div(x,y);
			}
		break;
		default:
			{
				cout<<"Invalid Choice : "<<endl;
			}
	}

	    return 0;
}