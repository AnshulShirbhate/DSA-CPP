//Q. Write a program in C++ to copy one string into another by using pointer to string. (S-10 4M)

#include <iostream>
using namespace std;
int main() 
{
	int i = 0;
	char s[10], *p;
	char r[10], *q;
	p = & s[0];
	q = & r[0];
	cout << "Enter first string: ";
	cin >> p;	
	while( *(p + i) != '\0') 
	{
		*(q + i) = *(p + i);
		i = i + 1;
	}
	*(q + i) = '\0';
	cout << "Copied String is: " << q << endl;
	return 0;
}
