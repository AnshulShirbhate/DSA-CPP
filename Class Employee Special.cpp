/* 	
Q. Write a program to define a class employee having data members empId, empName, empPost 
and salary. Accept data for 5 employee and display name of employees, there empId and 
empPost using display function and also use salary function to display salary of an employee 
with requested empId. For accepting data of employee use function 
StoreEmp(empId, empName, empPost, salary). (Summer 2011 8 Marks)
*/

#include <iostream>
#include <string.h>

using namespace std;
class Employee {
	private:
		int empId;
		char empName[10];
		char empPost[10];
		int salary;
	public: 
		void StoreEmp(int id, char name[], char post[], int sal) {
			empId = id;
			strcpy(empName, name);
			strcpy(empPost, post);
			salary = sal;
		}
	void display() {
		cout << "Employee name is: " << empName << endl;
		cout << "Employee ID   is: " << empId << endl;
		cout << "Employee post is: " << empPost << endl;
	}
	void getSalary(int id) {
		if(empId == id) {
			cout << "Employee salary is: " << salary << endl;
		}
	}
};

int main() {
	int i, id, sal;
	char name[10], post[10];
	Employee eArr[5];
	for(i = 0; i < 5; ++i) {
		cout << "Enter employee id, name, post and salary: ";
		cin >> id >> name >> post >> sal;
		eArr[i].StoreEmp(id, name, post, sal);
	}
	for(i = 0; i < 5; ++i) {
		eArr[i].display();
		eArr[i].getSalary(333);
		}
	return 0;
}
