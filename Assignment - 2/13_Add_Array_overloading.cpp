#include<iostream>
using namespace std;

class Add_Array
{
	public :
		int a[2][2],row,col;
	
	int getdata()
	{
		cout<<"Enter Data : "<<endl;
		for(row=0;row<2;row++)
		{
			for(col=0;col<2;col++)
			{
				cin>>a[row][col]; //x
			}
		}
	}
	
	Add_Array operator +(Add_Array xyz)
	{
		int c[2][2];
		
		for(row=0;row<2;row++)
		{
			for(col=0;col<2;col++)
			{
				c[row][col] = a[row][col] + xyz.a[row][col];
			}
		}	
		
			for(row=0;row<2;row++)
		{
			for(col=0;col<2;col++)
			{
				cout<<c[row][col]<<" ";
			}
			cout<<endl;
		}	
	}
		
};

int main()
{
	Add_Array obj1,obj2,sum;
	obj1.getdata();
	obj2.getdata();
	
	sum = obj1+obj2;
	
	return 0;
}