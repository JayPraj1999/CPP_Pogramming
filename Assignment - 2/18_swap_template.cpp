#include<iostream>
using namespace std;

template <typename data>

data swap(data a,data b)
{
	cout<<"Befor Swap : "<<endl;
	cout<<"A = "<<a<<endl;
	cout<<"B = "<<b<<endl;
	
	a = a+b;
	b = a-b;
	a = a-b;
	
	cout<<"After swap : "<<endl;
	cout<<"A = "<<a<<endl;
	cout<<"B = "<<b<<endl;
}

int main()
{
	swap(2,3);
	return 0;
}