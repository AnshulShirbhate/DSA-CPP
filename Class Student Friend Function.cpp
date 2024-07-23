#include <iostream>
using namespace std;
class Student 
{
	int marks1;
	int marks2;
	int marks3;
	public : 

	void accept() 
	{
		cout << "Enter marks of three subjects: ";
		cin >> marks1 >> marks2 >> marks3;
	}

	void display() 
	{
		cout << "First  subject marks: " << marks1 << endl;
		cout << "Second subject marks: " << marks2 << endl;
		cout << "Third  subject marks: " << marks3 << endl;
	}
	friend void percentage(Student s);
};
void percentage(Student s) 
{
	int om = s.marks1 + s.marks2 + s.marks3;
	float per = om / 300.0 * 100;
	cout << "Percentage is: " << per << endl;
}
int main() 
{
	Student s;
	s.accept();
	s.display();
	percentage(s);
	return 0;
}
