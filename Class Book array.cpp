/* 	
Q. 	Write a program to declare a class 'Book' having data members as page and price.
	Accept this data for 5 objects and display information of book having price greater 
	than 500.
*/

#include <iostream>
using namespace std;

class Book {
	int page;
	int price;
	public:
		void accept() {
			cout << "Enter number of pages and price: ";
			cin >> page >> price;
		}
		void display() {
		if(price >= 500) {
			cout << "Book Pages is : " << page << endl;
			cout << "Book Price is : " << price << endl << endl;
		}
	}
};

int main() {
	int i;
	Book bArr[5];
	for(i = 0; i < 5; ++i) {
		bArr[i].accept();
	}
	cout << "\nInformation of book price greater the 500" << endl;
	for(i = 0; i < 5; ++i) {
		bArr[i].display();
	}
	return 0;
}
