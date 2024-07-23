/* 	
Q. Write a program to declare a class student containing data members rollno, name and 
percentage of marks. Read data for 2 objects and display data of student having higher 
percentage of marks.
*/

#include <iostream>
using namespace std;
class Student {
	int rollno;
	char name[10];
	float per;
	public:
		void read() {
			cout << "Enter rollno, name and per: ";
			cin >> rollno >> name >> per;
		}
	void display(Student s) {
		if(per > s.per) {
			cout << "Roll Number  is : " << rollno << endl;
			cout << "Student Name is : " << name << endl;
			cout << "Percentage   is : " << per << endl;
		} else {
			cout << "Roll Number  is : " << s.rollno << endl;
			cout << "Student Name is : " << s.name << endl;
			cout << "Percentage   is : " << s.per << endl;
			}
	}
};
int main() {
	Student s1, s2;
	s1.read();
	s2.read();
	s1.display(s2);
	return 0;
}
