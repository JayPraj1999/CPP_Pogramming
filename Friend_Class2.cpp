#include<iostream>
using namespace std;

class A
{
	private:
		int a=50,ans,amount;
		
	friend class B;
	friend class C;
};

class B : public virtual A
{
	public:
	void getA()
	{
		cout<<"Enter Amount : ";
		cin>>amount;
		cout<<"A Got "<<amount<<endl;
		
		ans = a - amount;
	}
};

class C : public virtual A,public virtual B
{
	public:
		void getB()
		{
			cout<<"B got "<<ans;
		}
	
};

int main()
{
	C obj;
	obj.getA();
	obj.getB();
	
	return 0;
}