#include<iostream>
using namespace std;
class Student
{
	char name[10];
	float percentage;
	public:
		Student()
		{
			cout<<"Enter the name and percentage of student: ";
			cin>>name>>percentage;
		}
		void display()
		{
			cout<<"The name of student is: "<<name<<endl;
			cout<<"The percentage of student is: "<<percentage<<endl;
		}
};
int main()
{
	Student S;
	S.display();
	return 0;
}
