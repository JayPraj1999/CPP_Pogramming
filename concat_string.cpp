#include<iostream>
using namespace std;

class concat
{
	public :
		
		string name1,name2,final;
		
		void data1()
		{
			cout<<"Enter First String : ";
			cin>>name1;
		}
		
		void data2()
		{
			cout<<"Enter Second String : ";
			cin>>name2;
		}
		
		concat operator +(concat a)
		{
			a.final =	a.data1()+ a.data2() ;
		}
		
		void diaplay()
		{
			
			cout<<"Concat String is : "<<final;
		}
};



int main()
{
	concat obj1,obj2,obj3;
	obj1.data1();
	obj2.data2();
	
	obj3.diaplay();
	
	return 0;
}