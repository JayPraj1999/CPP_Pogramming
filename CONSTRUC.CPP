#include<iostream.h>
#include<conio.h>

int ans;
class add
{
	public : add(int a, int b)
	{
		ans = a + b;
		cout<<"Addition = "<<ans<<endl;
	}
};

class sub
{
	public : sub(int a, int b)
	{
		ans = a - b;
		cout<<"Subtraction = "<<ans<<endl;
	}
};

class multi
{
	public : multi(int a, int b)
	{
		ans = a * b;
		cout<<"Multiplication = "<<ans<<endl;
	}
};

class div
{
	public : div(int a, int b)
	{
		ans = a / b;
		cout<<"Division = "<<ans<<endl;

	}
};

void main()
{
	clrscr();
	add aobj(5,5);
	sub sobj(7,3);
	multi mobj(4,5);
	div dobj(8,2);

	getch();
}