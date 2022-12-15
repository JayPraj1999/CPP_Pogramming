#include<iostream>
using namespace std;

class Cricket
{
	public :
		int runs[10],i,top=0,sum=0;
		string name;
		float avg;
		
		
		void run()
		{
		
			for(i=0;i<10;i++)
			{
				cout<<"Enter run of Inning "<<i+1<<" : ";
				cin>>runs[i];
				
				sum = sum + runs[i];
				
				if(runs[i] >= top)
				{
					top = runs[i];
				}
			}
		//	cout<<sum<<endl;
		}
				
		
		
};

class Batsman : public Cricket
{
	public :
		
		void data()
		{
			cout<<"Enter Cricketer Name : ";
			cin>>name;
		}
		
//		void total_run()
//		{
//			cout<<"Tota run of "<<name<<" is "<<sum<<endl<<endl;
//		}
		
//		void BestPerform()
//		{
//			cout<<"Best Performance : "<<top<<endl<<endl;
//		}
		
		void Average()
		{
			avg = sum / runs[i];
	//		cout<<"Average Run is "<<avg;
		}
		
		void display()
		{
			cout<<"Name Of Batsman is : "<<name<<endl;
			cout<<"Tota run of "<<name<<" is "<<sum<<endl;
			cout<<"Best Performance : "<<top<<endl;
			cout<<"Average Run is "<<avg;
		}
};

int main()
{
	Batsman C;
	C.data();
	C.run();
//	C.BestPerform();
	C.Average();
	C.display();
	
	return 0;
}