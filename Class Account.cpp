/* 	
Q. 	Write a program to declare a class 'Account' having data members as acc_no and balance.
	Accept this data for 10 objects and display account number of accounts having balance 
	greater than 5000.
*/

#include <iostream>
using namespace std;

class Account {
	int acc_no;
	long balance;
	public:
		void accept() {
			cout << "Enter account number and balance: ";
			cin >> acc_no >> balance;
		}
		void display() {
		if(balance >= 5000) {
			cout << "Account Number  is : " << acc_no << endl;
			cout << "Account Balance is : " << balance << endl << endl;
		}
	}
};

int main() {
	int i;
	Account aArr[10];
	for(i = 0; i < 10; ++i) {
		aArr[i].accept();
	}
	cout << "Information of Account greater the 5000" << endl;
	for(i = 0; i < 10; ++i) {
		aArr[i].display();
	}
	return 0;
}
