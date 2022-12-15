#include<iostream>
using namespace std;

int ans;
class add
{
	public : 
	
	add(int a, int b)
	{
		ans = a + b;
		cout<<"Addition = "<<ans<<endl;
	}
};

class sub
{
	public : 
	
	sub(int a, int b)
	{
		ans = a - b;
		cout<<"Subtraction = "<<ans<<endl;
	}
};

class multi
{
	public : 
	
	multi(int a, int b)
	{
		ans = a * b;
		cout<<"Multiplication = "<<ans<<endl;
	}
};

class Div
{
	public : 
	
	Div(int a, int b)
	{
		ans = a / b;
		cout<<"Division = "<<ans<<endl;

	}
};

int main()
{
	Div obj(8,2);
	add aobj(5,5);
	sub sobj(7,3);
	multi mobj(4,5);


	return 0;
}