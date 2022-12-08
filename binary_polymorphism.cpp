#include<iostream>
using namespace std;

class binary
{
	
	public : 
	
	int value=0;
	
	void getvlaue(int a)
	{
		value = a; //10
	}
	
	binary operator +(binary b)
	{
		binary  x;
		x.value = value + b.value;
		return x;
	}
	
	void show()
	{
		
		cout<<value<<endl;
	}
	
};

int main()
{
	binary obj1,obj2,obj3;
	obj1.getvlaue(10);
	obj2.getvlaue(20);
	obj3=obj1+obj2;
	obj3.show();
	
	return 0;
}