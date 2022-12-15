#include<iostream>
using namespace std;

class test
{
	
	private :
		string name="Jay";
		
	friend void display(test t);
};

void display(test t)
{
	cout<<"Hello "<<t.name<<endl;
}

int main()
{
	test obj;
	display(obj);
	
	
	return 0;
}