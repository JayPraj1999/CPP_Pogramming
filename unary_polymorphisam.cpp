#include<iostream>
using namespace std;

class unary
{
		public : 
		
		int value;
		
		void getvalue(int v)
		{
			value = v;
		}
		
		void operator ++()
		{
			
		}
		
		void display()
		{
			cout<<value<<endl;
		}
};

int main()
{
	unary obj;
	obj.getvalue(100);
	++obj;
	obj.display();
	
	return 0;
}