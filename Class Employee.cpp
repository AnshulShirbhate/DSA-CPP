#include<iostream>
using namespace std;

class Employee
{
	private:
	     int emp_id;
         int salary;
	public:
	void accept()
	{
	     cout<<"Enter the id and salary of Employee: ";
	     cin>>emp_id>>salary;
    }
    void display()
    {
         cout<<"The Id of Employee is: "<<emp_id<<endl;
         cout<<"The salary of the employee is: "<<salary<<endl;
	}
};

int main()
{
	Employee e;
	e.accept();
	e.display();
	return 0;
}
