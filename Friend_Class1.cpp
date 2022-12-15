#include<iostream>
using namespace std;

class A
{
	private:
		int a=10;
	friend class C;
};

class B
{
	private:
		int b=10;
	friend class C;
};

class C : public A, public B
{
	public:
		int c;
		void getdata()
		{
			c = a + b;
			cout<<"C = "<<c<<endl;
		}	
};

int main()
{
	C obj;
	obj.getdata();
	return 0;
}