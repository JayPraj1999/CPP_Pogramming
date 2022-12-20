#include<iostream>
using namespace std;

void max(int n)
{
	int a[n],i,max=0;
	cout<<"Enter Element : "<<endl;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	for(i=0;i<n;i++)
	{ 
		if(max < a[i])
		{
			max = a[i];
		}

	}
	cout<<"Max is : "<<max;
	
}

int main()
{
	int size;
	cout<<"Enter size of the array : ";
	cin>>size;
	
	max(size);
		
	return 0;
}