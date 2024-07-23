/* 	
	Q. Write a program to define a class student having data members name and rollno. Write a
	program with member function accept() to accept data and display() to display data for 4
	Students.
*/

#include <iostream>
using namespace std;

class Student {
	private:
		int rollno;
		char name[10];
	public:
		void accept() {
			cout << "Enter rollno and name: ";
			cin >> rollno >> name;
		}
	void display() {
		cout << "Roll Number  is : " << rollno << endl;
		cout << "Student name is : " << name << endl << endl;
	}
};

int main() 
{
	Student sArr[4];
	for(int i=0;i<4;++i) 
	{
		sArr[i].accept();
	}
	for(int i=0;i<4;i++)
	{	
		sArr[i].display();
	}
	return 0;
}
