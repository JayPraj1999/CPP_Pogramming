#include<iostream>
using namespace std;

class A
{
	public:
		int num;
		
	int getdata(int n)
	{
		num = n;
	}
	
	A operator +(A x)
	{
		x.num = num + x.num;
	}
	
	void display()
	{
		cout<<num;
	}
	
};

int main()
{
	
	A obj1,obj2,sum;
	obj1.getdata(10);
	obj2.getdata(20);
	
	sum = obj1 + obj2;
	
	sum.display();
	
	
	return 0;
}