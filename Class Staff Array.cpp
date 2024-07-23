/* 	
Q. Write a program to define a class 'Staff' having data members staff name and staff post.
 	Accept this data for 5 staffs and display information of staff those who are HOD. 
	(Winter 2011 4M)
*/

#include <iostream>
#include <string.h>

using namespace std;

class Staff {
	char name[20];
	char post[10];
	public:
		void accept() {
			cout << "Enter name and post of staff: ";
			cin >> name >> post;
		}
		void display() {
		if(strcmp(post, "HOD") == 0) {
			cout << "Staff name is: " << name << endl;
			cout << "Staff post is: " << post << endl << endl;
		}
	}
};

int main() {
	int i;
	Staff sArr[5];
	for(i = 0; i < 5; ++i) {
		sArr[i].accept();
	}
	cout << "\nInformation of staff" << endl;
	for(i = 0; i < 5; ++i) {
		sArr[i].display();
	}
	return 0;
}
