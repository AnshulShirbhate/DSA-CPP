//Q. Write a program in C++ to concatenate two string by using pointer to string. (S-14|W-15 4M)

#include <iostream>
#include <string.h>
using namespace std;
int main() 
{
	int i = 0, j;
	char s[10], *p;
	char r[20], *q;
	p = & s[0];
	q = & r[0];
	cout << "Enter two string: ";
	cin >> p >> q;
	j = strlen(q);
	while( *(p + i) != '\0') 
	{
		 *(q + j) =*(p + i);
		i = i + 1;
		j = j + 1;
	}
	*(q + j) = '\0';
	cout << "Concatenate String: " << q << endl;
	return 0;
}
