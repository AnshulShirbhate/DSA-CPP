//Q. Write a program in C++ to declare a class birthday having data members day, month and year. 
//Accept this information for 5 object using pointer to array of object. (W-14 8M)

#include <iostream>
using namespace std;
class Birthday {
	private: 
		int day;
		int month;
		int year;
	public: void accept() {
		cout << "Enter day, month and year: ";
		cin >> day >> month >> year;
	}
	void display() {
		cout << "\nBirthday date is: " << day;
		cout << " / " << month;
		cout << " / " << year << endl;
		// Date format : 03/11/2020
	}
};
int main() {
	Birthday b[5];
	Birthday *bp;
	bp = & b[0];
	for(int i = 0; i <= 4; ++i) {
		(bp + i) -> accept();
	}
	for(int i = 0; i < 5; i++) {
		(bp + i) -> display();
	}
	return 0;
}
