#include<iostream>
using namespace std;

class Max
{
	
	private :
		int a,b;
		
	friend void display(Max m);
};

void display(Max m)
{
	
	cout<<"Enter the value of A : ";
	cin>>m.a;
	cout<<"Enter the value of B : ";
	cin>>m.b;
	
	if(m.a>m.b)
	{
		cout<<"A is Maximum.";
	}
	else
	{
		cout<<"B is Maximum.";
	}
}

int main()
{
	Max obj;
	display(obj);
	
	return 0;
}