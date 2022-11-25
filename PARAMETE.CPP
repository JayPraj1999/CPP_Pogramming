//Parameterized Consturctor
#include<iostream.h>
#include<conio.h>

class add
{       int sum;
	public : add(int a, int b)
	{
		sum = a + b;
		cout<<"Sum = "<<sum<<endl;
	}
};

void main()
{
	clrscr();
	add obj(5,5);
	getch();
}