#include<iostream>
using namespace std;
class Rectangle
{
	int length,breadth;
	public:
		Rectangle(int l, int b)
		{
			length=l;
			breadth=b;
		}
		Rectangle(Rectangle &R)
		{
			length=R.length;
			breadth=R.breadth;
		}
		void display()
		{
			cout<<"The length  is: "<<length<<endl;
			cout<<"The breadth is: "<<breadth<<endl;
		}
};
int main()
{
	Rectangle R1(4,5);
	Rectangle R2(R1);
	R1.display();
	R2.display();
	return 0; 
}
