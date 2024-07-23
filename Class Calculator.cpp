/*
Here  is a program on how to make a calculator.
*/

#include<iostream>
using namespace std;
class Calculator
{
	private:
		int n1,n2,result,op;
		float division;
	public:
		void accept()
		{
		cout<<"Select the operation you want to perform: \n";
		cout<<"1.Addition\n2.Substraction\n3.Multiplication\n4.Division\n5.Modulous\n\n";
		cin>>op;
		switch(op)
		{
			case 1: cout<<"Input two numbers: ";
			cin>>n1>>n2;
			result=n1+n2;
			cout<<"The addition of numbers is: "<<result;
			break;
			
			case 2: cout<<"Input two numbers: ";
			cin>>n1>>n2;
			result=n1-n2;
			cout<<"The substraction of numbers is: "<<result;
			break;
			
			case 3: cout<<"Input two numbers: ";
			cin>>n1>>n2;
			result=n1*n2;
			cout<<"The  multiplication of numbers is: "<<result;
			break;
			
			case 4: cout<<"Input two numbers: ";
			cin>>n1>>n2;
			division=n1/n2;
			cout<<"The division of numbers is: "<<division;
			break;
			
			case 5: cout<<"Input two numbers: ";
			cin>>n1>>n2;
			result=n1%n2;
			cout<<"The modulous of numbers is "<<result;
			break;
			
			default: cout<<"Please choose the corretc operator ";
			
		}
	}
};

int main()
{
	Calculator C;
	C.accept();
	return 0;
}
