#include<iostream>
using namespace std;

class sorting
{
	public:
		int n,r,c;
		
	void getdata()
	{
		cout<<"How long array you want : ";
		cin>>n;
		cout<<endl;
		int a[n],temp;
		cout<<"Enter Elements : "<<endl;
		for(r=0;r<n;r++)
		{
			cin>>a[r];
		}
		
		for(r=0;r<n;r++)
		{
			for(c=r+1;c<n;c++)
			{
				if(a[r]>a[c])
				{
					temp = a[c];
					a[c] = a[r];
					a[r] = temp;
				}
			}
		}
		cout<<"After Sorting : "<<endl;
		for(r=0;r<n;r++)
		{
			cout<<a[r]<<" ";
		}
		
	}
		
};

int main()
{
	
	sorting sort;
	sort.getdata();
	
	return 0;
}