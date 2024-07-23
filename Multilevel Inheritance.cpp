/*
Q. Identify the type of inheritance and implement it by writing a program for the following figure. Assume suitable member functions. 
class customer: data members - name, mobile. 
class depositor: data members - acc_no, balance. 
class Borrower: data members - loan_no and loan_amount.
*/

#include<iostream>
using namespace std;
class Customer
{
	protected:
	char name[10];
	long int mobile_no;
	public:
		void get_customer()
		{
			cout<<"Enter the name and mobile number of the customer : ";
			cin>>name>>mobile_no;
		}
		void show_customer()
		{
			cout<<"The name of the customer is: "<<name<<endl;
			cout<<"The mobile number of the customer is: "<<mobile_no<<endl; 
		}
};
class Depositor: public Customer
{
	protected:
		long int acc_no;
		int balance;
	public: 
	    void get_depositor()
		{
			cout<<"Enter the account number and balance: ";
			cin>>acc_no>>balance;
	    }  
		void show_depositor()
		{
			cout<<"The account number is: "<<acc_no<<endl;
			cout<<"The balance is: "<<balance<<endl; 
		}	
};
class Borrower: public Depositor
{
	private:
		int loan_no;
		int loan_amount;
	public:
	    void get_borrower()
		{
		 	cout<<"Enter the loan number and loan amount: ";
		 	cin>>loan_no>>loan_amount;
		}	
		void show_borrower()
		{
			cout<<"The loan number is: "<<loan_no<<endl;
			cout<<"The loan amount is: "<<loan_amount<<endl;
		}
};
int main()
{
	Borrower B;
	B.get_customer();
	B.get_depositor();
	B.get_borrower();
	B.show_customer();
	B.show_depositor();
	B.show_borrower();
	return 0;
}

