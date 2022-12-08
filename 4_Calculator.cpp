#include<iostream>
#include<conio.h>
using namespace std;
class calC
{
	float ans;
	public : int sum(int a, int b)
	{
		ans = a + b;
		return ans;
	}
	public : int sub(int a, int b)
	{
		ans = a - b;
		return ans;
	}
	public : int multi(int a, int b)
	{
		ans = a * b;
		return ans;
	}
	public : int div(int a, int b)
	{
		ans = a / b;
		return ans;
	}
	public : int mod(int a, int b)
	{
		ans = a % b;
		return ans;
	}
};

int main()
{
	int choice,x,y;
	char ch;
	do{
	cout<<"Press '1' for Addition."<<endl;
	cout<<"Press '2' for Subtraction."<<endl;
	cout<<"Press '3' for Multiplication."<<endl;
	cout<<"Press '4' for Divison."<<endl;
	cout<<"Press '5' for modulo."<<endl<<endl<<endl;
	cout<<"Please enter your choice : ";
	cin>>choice;
	cout<<"Enter first value = " ;
	cin>>x;
	cout<<"Enter Second value = " ;
	cin>>y;
	calC obj;
	switch(choice)
	{       case 1 :
		{
			cout<<"Addition = "<<obj.sum(x,y)<<endl;;
		}
		break;
		case 2 :
		{
			cout<<"Subtraction = "<<obj.sub(x,y)<<endl;
		}
		break;
		case 3 :
		{
			cout<<"Multiplication = "<<obj.multi(x,y)<<endl;
		}
		break;
		case 4 :
		{
			cout<<"Division = "<<obj.div(x,y)<<endl;
		}
		break;
		case 5 :
		{
			cout<<"Modulo = "<<obj.mod(x,y)<<endl;
		}
		break;
		default :
		{
			cout<<"Invalid choice Entered,"<<endl;
			cout<<"Please Enter valid choice. "<<endl;
		}
		break;
	}
	cout<<"Do you want to repeat this program ?"<<endl;
	cout<<"Press y for Yes or Press n for No : ";
	cin>>ch;
	}while(ch == 'y' || ch == 'Y');
	getch();
}