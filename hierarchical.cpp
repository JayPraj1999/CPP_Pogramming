#include<iostream>
using namespace std;

class A
{
	
	public :
		
		void showA()
		{
			cout<<"Parent Class A"<<endl;
		}
};

class B : public virtual A
{
	
	public :
		
		void showB()
		{
			cout<<"Child Class B"<<endl;
		}
};

class C : public virtual A
{
	
	public :
		
		void showC()
		{
			cout<<"Child Class C"<<endl;
		}
};

class D : public B, public C
{
	public : 
		
		void showD()
		{
			cout<<"Grand Child D"<<endl;
		}
};

class E : public B, public C
{
	public : 
		
		void showE()
		{
			cout<<"Grand Child E"<<endl;
		}
};

class F : public C, public B
{
	public :
		
		void showF()
		{
			cout<<"Grand Child F"<<endl;
		}
};

class G : public C, public B
{
	public:
		
		void showG()
		{
			cout<<"Grand Child G"<<endl;
		}
};

int main()
{
	G obj;
	obj.showA();
	obj.showB();
	obj.showC();
	obj.showG();
	
	return 0;
}