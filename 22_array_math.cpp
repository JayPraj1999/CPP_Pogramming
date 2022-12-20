#include<iostream>
using namespace std;

class array_math
{
	public:
		int a[2][2],b[2][2],sum[2][2];
		int r,c;
		
	void getdata()
	{
		cout<<"Enter first array : "<<endl;
		for(r=0;r<2;r++)
		{
			for(c=0;c<2;c++)
			{
				cin>>a[r][c];
			}
		}
		
		cout<<"Enter Second array : "<<endl;
		for(r=0;r<2;r++)
		{
			for(c=0;c<2;c++)
			{
				cin>>b[r][c];
			}
		}
	}
	
	void add()
	{
		for(r=0;r<2;r++)
		{
			for(c=0;c<2;c++)
			{
				sum[r][c] = a[r][c] + b[r][c];
			}
		}
		cout<<"Addition is "<<endl;
		for(r=0;r<2;r++)
		{
			for(c=0;c<2;c++)
			{
				cout<<sum[r][c]<<" ";
			}
			cout<<endl;
		}
	}
	
	void sub()
	{
		for(r=0;r<2;r++)
		{
			for(c=0;c<2;c++)
			{
				sum[r][c] = a[r][c] - b[r][c];
			}
		}
		cout<<"Subtraction is "<<endl;
		for(r=0;r<2;r++)
		{
			for(c=0;c<2;c++)
			{
				cout<<sum[r][c]<<" ";
			}
			cout<<endl;
		}
	}
	
	void multi()
	{
		for(r=0;r<2;r++)
		{
			for(c=0;c<2;c++)
			{
				sum[r][c] = a[r][c] * b[r][c];
			}
		}
		cout<<"Multiplication is "<<endl;
		for(r=0;r<2;r++)
		{
			for(c=0;c<2;c++)
			{
				cout<<sum[r][c]<<" ";
			}
			cout<<endl;
		}
	}
	
};

int main()
{
	array_math obj;
	obj.getdata();
	obj.add();
	obj.sub();
	obj.multi();
	
	return 0;
}