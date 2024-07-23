/*
Q. Write a program in C++ to define a class student with data member rollno and percentage,
member function outside the class accept and display.
*/

#include <iostream>
using namespace std;

class Student {
	private:
		int rollno;
		float per;
	public:
		void accept();
		void display();
		};

void Student :: accept() {
	cout << "Enter rollno and per: ";
	cin >> rollno >> per;
}

void Student :: display() {
	cout << "Rollno is  : " << rollno << endl;
	cout << "Percentage : " << per << endl;
}

int main() {
	Student s;
	s.accept();
	s.display();
	return 0;
}
