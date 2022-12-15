#include<iostream>
using namespace std;

class Swap
{
	private:
		int a=10,b=20;
	
	friend  void display(Swap s);
};

void display(Swap s)
{
	cout<<"Before Swapping : "<<endl;
	cout<<"A = "<<s.a<<endl;
	cout<<"B = "<<s.b<<endl;
	
	s.a= s.a + s.b;
	s.b = s.a - s.b;
	s.a = s.a - s.b;
		
	cout<<"After Swapping : "<<endl;
	cout<<"A = "<<s.a<<endl;
	cout<<"B = "<<s.b<<endl;
}

int main()
{
	Swap obj;
	display(obj);
	
	return 0;
}