/*
Q. Write a program in C++ to define a class Student with data member rollno and per, member
function accept and display. 
*/

#include <iostream>
using namespace std;

class student 
{
	private:
		int rollno;
		float per;
	public:
	void accept() 
	{
		cout << "Enter rollno and per: ";
		cin >> rollno >> per;
	}
	void display()
	{
		cout << "Roll Number : " << rollno << endl;
		cout << "Percentage  : " << per << endl;
	}
};

int main() 
{
	student s;
	s.accept();
	s.display();	
	return 0;
}
