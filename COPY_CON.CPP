//Copy Constructor
#include<iostream.h>
#include<conio.h>

class copy
{
	int x,y;
	public : copy(int a, int b)
	{
		x = a;
		y = b;
	}
	public : void display()
	{
		cout<<"x = "<<x<<endl;
		cout<<"y = "<<y<<endl;
	}
};

void main()
{
	clrscr();
	copy obj(5,6);
	copy obj1(obj);
	obj.display();
	obj1.display();

	getch();
}