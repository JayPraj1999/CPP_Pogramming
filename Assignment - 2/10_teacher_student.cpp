#include<iostream>
using namespace std;

class person
{
	
	public :
		string sname,tname;
		int age;
};

class student : public person
{
	public :
		float percent;
		int math,sci,eng,phy,sum;
		
		void s_data()
		{
		
			cout<<"Enter Name of the student : ";
			cin>>sname;
			cout<<"Enter Marks of Subject Maths : ";
			cin>>math;
			cout<<"Enter Marks of Subject Science : ";
			cin>>sci;
			cout<<"Enter Marks of Subject English : ";
			cin>>eng;
			cout<<"Enter Marks of Subject Physics : ";
			cin>>phy;
			
			sum = math + sci + eng + phy ; 
			percent =( sum * 100 ) / 400;
			cout<<"Percentage is : "<<percent<<endl;
			cout<<endl;
		}
		
		void s_display()
		{
			cout<<"Student name : "<<sname<<endl;
		}
		
};

class teacher : public person
{
	
	public :
		int salary;
		
		void t_data()
		{
		
			cout<<"Enter Name of the Teacher : ";
			cin>>tname;
			cout<<"Enter age : ";
			cin>>age;
			cout<<"Enter Salary : ";
			cin>>salary;
			cout<<endl;
		}
	
		void t_display()
		{
			cout<<"Teacher Name : "<<tname<<endl;
			cout<<"Age is : "<<age<<endl;
			cout<<"Salary is : "<<salary<<endl;
		}
};

int main()
{
	student s;
	teacher t;
	s.s_data();
	t.t_data();
	s.s_display();
	t.t_display();
	
	return 0;
}