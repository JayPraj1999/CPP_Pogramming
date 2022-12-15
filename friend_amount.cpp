#include<iostream>
using namespace std;

class money
{
	
	private :
		int p=500,remain,amount;
	friend void display1(money m);
	friend void display2(money m);
};

void display1(money m)
{
	cout<<"Enter Amount : ";
	cin>>m.amount;
	cout<<"Friend 1 got "<<m.amount<<endl;

}

void display2(money m)
{
	m.remain = m.p - m.amount;
	cout<<"Friend 2 got "<<m.remain<<endl;
}

int main()
{
	money obj1,obj2;
	display1(obj1);
	display2(obj2);	
	return 0;
}