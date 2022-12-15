#include<iostream>
using namespace std;

class A
{
	private:
		int a=20;
	
	friend class B;
};

class B : public A
{
	public :
		void get()
		{
			cout<<"A = "<<a;
		}
};


int main()
{
	B obj;
	obj.get();
		
	return 0;
}