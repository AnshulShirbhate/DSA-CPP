#include<iostream>
using namespace std;
class Number
{
	private:
	int centimeter;
	float meter;
	public:
		void accept()
	{
		cout<<"Enter a number in centimeter: ";
		cin>>centimeter;
	}
	void conversion()
	{
		meter=(float)centimeter/100;
		cout<<"The Value of number entered in centimeter in meter is: "<<meter;
	}
};
int main()
{
	Number n;
	n.accept();
	n.conversion();
	return 0;
}
