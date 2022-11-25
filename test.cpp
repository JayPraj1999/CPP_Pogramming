#include<iostream>
#include<conio.h>
#include<string.h>

class pizza
{
	int total;
	public : int margherita(int a)
	{
		total = 199 * a;
		return total;
	}
	public : int corn(int a)
	{
		total = 309 * a;
		return total;
	}
	public : int tomato(int a)
	{
		total = 250 * a;
		return total;
	}
};

int main()
{
		char name[10],ch;
	int choice,choice1,quantity;

	//clrscr();
	/*sandwich sobj;
	burger bobj;
	pizza pobj;
	rolls robj;
	biryani biobj;
*/
	cout<<"-------------Tops Tech. Fast Food---------------"<<endl;

	cout<<"Please Enter your name : ";
	cin>>name;
	cout<<"Hello "<<name<<endl;
}