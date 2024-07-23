//Q. Write a program in C++ to accept a string from user and count number of vowels in the string 
//using pointer to string. (W-11 | S-12, 14 4M)

#include <iostream>
using namespace std;
int main() {
	int i = 0, c = 0;
	char str[10];
	char *ptr;
	ptr = & str[0];
	cout << "Enter any string: ";
	cin >> ptr;
	while(*(ptr + i) != '\0') {
		switch(*(ptr + i)) {
			case 'a':
			case 'A':
			case 'e':
			case 'E':
			case 'i':
			case 'I':
			case 'o':
			case 'O':
			case 'u':
			case 'U': c = c + 1; break;			
		}
		i = i + 1;
	}
	cout << "Number of vowels are: " << c << endl;
	return 0;
}
