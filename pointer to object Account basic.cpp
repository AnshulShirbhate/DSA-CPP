//Q. Create a class account with data members as accno and balance. Create member function as getdata() and showdata().
//Write a program to create a pointer for getdata() and showdata() function and access then using object of class account. (S-15 8M)

#include<iostream>
using namespace std;
class Account
{
	private:
		int acc_no;;
		int balance;
	public:
		void getdata()
		{
			cout<<"Enter Account number and balance : ";
			cin>>acc_no>>balance;
		}
		void showdata()
		{
			cout<<"Account number is : "<<acc_no<<endl;
			cout<<"Account balance is: "<<balance<<endl;
		}
};
int main()
{
	Account A;
	Account *AA;
	AA = &A;
	AA->getdata();
	AA->showdata();
	return 0;
}
