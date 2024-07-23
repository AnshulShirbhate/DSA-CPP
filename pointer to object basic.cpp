//Q. Write a program in C++ to declare a class product having data members as product_id and price. 
//Accept and display data for one object using pointer to object. (W-15 4M)

#include <iostream>
using namespace std;
class Product 
{
	private: 
		int id;
		int price;
	public: 
		void accept() 
	{
		cout << "Enter product id and price: ";
		cin >> id >> price;
	}
	void display() 
	{
		cout << "Product ID   : " << id << endl;
		cout << "Product Price: " << price << endl;
	}
};
int main() 
{
	Product p;
	Product *pp;
	pp = & p;
	pp -> accept();
	pp -> display();
	return 0;
}
