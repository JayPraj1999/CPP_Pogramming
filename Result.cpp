#include<iostream>
using namespace std;

class Student
{
	
	public :
		int roll_no;
		string name;
		
		void detail()
		{
			cout<<"Enter Name of the student : ";
			cin>>name;
			cout<<"Enter Roll no : ";
			cin>>roll_no;
		}	
};

class Test : public Student
{
	
	public :
		
		int sub1,sub2;
		
		void marks()
		{
			cout<<"Enter marks of Subject 1 : ";
			cin>>sub1;
			cout<<"Enter marks of Subject 2 : ";
			cin>>sub2;
		}
};

class Result : public Test
{
	public :
		int total;
		
		void total_marks()
		{
			total = sub1 + sub2;
		}
		
		void display()
		{
			cout<<"Roll No is : "<<roll_no<<endl;
			cout<<"Marks of Subject 1 is : "<<sub1<<endl;
			cout<<"Marks of Subject 2 is : "<<sub2<<endl;
			cout<<"Total Marks Obtain : "<<total<<endl;
		}
};

int main()
{
	Result r;
	r.detail();
	r.marks();
	r.total_marks();
	r.display();
	
	return 0;
}