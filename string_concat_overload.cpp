#include<iostream>
using namespace std;

class string_concat
{
	public:
		string str;
		
	void getdata(string s)
	{
		str = s;
	}
	
	string_concat operator +(string_concat xyz)
	{
		str = str + xyz.str;
	}
	
	void display()
	{
		cout<<str<<endl;
	}
};

int main()
{
	
	string_concat sc1,sc2,sum;
	string st1,st2;
	cin>>st1;
	cin>>st2;
	sc1.getdata(st1);
	sc2.getdata(st2);
	sum = sc1+sc2;
	sum.display();
	return 0;
}