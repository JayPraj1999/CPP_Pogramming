#include<iostream>
using namespace std;

class area_calculation
{
	
	public:
		float pi=3.14,ans;
		float area,breadth;
		
		void area1(float a, float b)
		{
			area = a;
			breadth = b;
			
			ans = area * breadth;
			cout<<"Area Of Rectangle is : "<<ans<<endl;
		}
		
		void area1(float a, float b,int val)
		{
			area = a;
			breadth = b;
			
			ans = (area * breadth) / val;
			cout<<"Area Of Triangle is : "<<ans<<endl;
		}
		
		void area1(float a, float b,float pi)
		{
			area = a;
			breadth = b;
			
			ans = pi * area * breadth;
			cout<<"Area Of Circle is : "<<ans<<endl;
		}
	
};

int main()
{
	
	float choice,a,b;
	static float pi=3.14;
	int val = 2;
//	cout<<"Enter value of Area : ";
//	cin>>a;
//	cout<<"Enter Value of Breadth : ";
//	cin>>b;

	area_calculation obj;
	obj.area1(2,2);
	obj.area1(2,2,val);
	obj.area1(3,4,pi);
	
	return 0;
}