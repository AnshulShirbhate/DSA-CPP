#include<iostream>
using namespace std;
class Student
{
	char name[20];
	int marks;
	public:
		void getname()
		{
			cin>>name;
		}
		void getmarks()
		{
			cin>>marks;
		}
		void displayinfo()
		{
			cout<<"Name : "<<name<<endl;
			cout<<"Marks: "<<marks<<endl;
		}
};
int main()
{
	Student S[5];
	for(int i=0;i<5;i++)
	{
		cout<<"Student "<<i+1<<endl;
		cout<<"Enter name: "<<endl;
		S[i].getname();
		cout<<"Enter marks: "<<endl;
		S[i].getmarks();
	}
	for(int i=0;i<5;i++)
	{
		cout<<"Student: "<<i+1<<endl;
		S[i].displayinfo();
	}
}
