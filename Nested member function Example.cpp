/* 	
Nested Member Function
======================

A nested member function is such a member function when one member function is called within
another member function. A member function of a class required object and a dot operator. but,
a nested member function does't required an object and a dot operator.  

Example:

*/
#include <iostream>
using namespace std;
class Student {
	int Hindi;
	int English;
	int Computer;
	public:
		void accept() {
			cout << "Enter marks of three subject: ";
			cin >> Hindi >> English >> Computer;
		}
		int total() {
		int op = Hindi + English + Computer;
		cout << "Obtain Marks: " << op << endl;
		return op;
	}
	void percentage() {
		int om = total();
		float per = om / 300.0 * 100;
		cout << "Percentage is : " << per << endl;
	}
	void display() {
		cout << "Hindi 		Marks: " << Hindi << endl;
		cout << "English 	Marks: " << English << endl;
		cout << "Computer 	Marks: " << Computer << endl;
	}
};
int main() {
	Student s;
	s.accept();
	s.display();
	s.percentage();
	return 0;
}
