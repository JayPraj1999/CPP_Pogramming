#include<iostream>
using namespace std;

class cube_multi
{
	public:
		int ans,num;
	
	inline void multi(int a)
	{
		num = a;
		ans = num*num;
		
		cout<<"Multiplication is : "<<ans<<endl;	
	}	
	
	inline void cube(int a)
	{
		num = a;
		ans = num*num*num;
		
		cout<<"Cubic value is : "<<ans<<endl;	
	}	
};

int main()
{
	int input;
	cube_multi obj;
	cout<<"Enter value to find multiplition and cubic value : ";
	cin>>input;
	obj.multi(input);
	obj.cube(input);
	
	return 0;
}