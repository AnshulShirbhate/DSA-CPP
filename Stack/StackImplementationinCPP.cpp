#include<iostream>
using namespace std;
#define size 10

void push(int);
void pop();
void display();

  //top = -1 means empty as stack starts from 0

int main()
{
	int stack[size];
	int top=-1;
	int value,choice;
	while(1)  //Loop until exit is not chosen
	{
		cout<<"\n*****Menu*****\n";
		cout<<"1.Push\n2.Pop\n3.Display\n4.Exit\n";
		cout<<"\nEnter your choice: ";
		cin>>choice;
		
		switch(choice)  //Decision making for the desired operation
		{
			case 1: cout<<"Enter the value to be inserted :";
			cin>>value;
			push(value);
			break;
			
			case 2: pop();
			break;
			
			case 3: display();
			break;
			
			case 4: exit(0);  
			break;
			
			default: cout<<"\nEnter the correct value.\n";
		}
	}
}

void push(int value)  //Inserts an item in the stack
{
	if(top==size-1)
	{
		cout<<"\nStack overflow!.....Insertion is not possible.\n";
	}
	else
	{
		top++;
		stack[top]=value;
		cout<<"\nInsertion is successfull.\n";
	}
}

void pop()  //deletes item at the top
{
	if(top==-1)
	{
		cout<<"\nStack underflow!......Deletion is not possible.\n";
	}
	else
	{
		cout<<"Deleted: "<<stack[top];
		top--;
	}
}

void display()  //display all the items of stack
{
	if(top==-1)
	{
		cout<<"\nStack is empty!........Nothing to display.\n";
	}
	else
	{
		int i;
		cout<<"\nStack elements are: \n";
		for(i=top;i>=0;i--)
		{
			cout<<"\n"<<stack[i];
		}
	}
}

