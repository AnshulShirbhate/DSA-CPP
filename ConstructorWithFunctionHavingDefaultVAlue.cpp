#include<iostream>
#include<string.h>
using namespace std;
class Book
{
	int price;
	char name[20];
	char author[20];
	public:
		Book(int pr, char nm[], char au[]="Javed Sir")
		{
			price=pr;
			strcpy(name,nm);
			strcpy(author,au);
		}
		void display()
		{
			cout<<"The name of the book   is: "<<name<<endl;
			cout<<"The Author of the book is: "<<author<<endl;
			cout<<"The price of the book  is: "<<price<<endl<<endl;
		}
};
int main()
{
	Book B1(300,"The Giver");
	Book B2(200,"The Taker","Rakesh");
	B1.display();
	B2.display();
	return 0;
}
