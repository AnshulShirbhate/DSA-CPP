/*

    In c++ pointers are special variables that are used to store the address of another variables such as a variable with data type int,
    float, bool, etc. 
    To declare a pointer variable we have to add * symbol infront of the variable name and initialize it with address of another
    variable with & symbol written infront of the variable whose address needs to be stored in the pointer variable.

    Syntax for declaration:
        int var = 5;
        int *ptr = &var;
        Here we are declaring and initializing a pointer variable for a variable of data type int that's why we have given "int" 
        data type for pointer variable.

    Now from the above example let's take some scenarios.
    If we change the value of var to "6" then when we print the *ptr then it's value will be also 6 as ptr is pointing to the address
    of the same variable.

    Note: 
        When we print the ptr variable directly then an address is printed in the standard output. To access the value stored at the
        address we need to use the * symbol. Example: cout<<*ptr; which will print the value present at the address.
        If we do this now, *ptr = *ptr+1; the value at the address will change from 5 to 6 as well. 


    Mistakes:
        Never declare a pointer without any value like this -> int *ptr;
        Now this ptr is storing any garbage value that we don't know which can be anything on the cpu and if the memory is
        important for CPU then it may be dangerous for the CPU. 

    Good Practice:
        If there is nothing to be assigned in the ptr at the starting point then simply initialize it with 0. i.e. int *ptr = 0;

*/

#include<iostream>
using namespace std;

int main()
{
    int a = 5;
    int * aptr = &a;

    //This will print the value of a
    cout<<a<<endl;

    //This will print the address of a stored in aptr variable
    cout<<aptr<<endl;

    //This will print the address of a 
    cout<<&a<<endl;

    //This will print the value of a because * is working as dereference operator here.
    cout<<*aptr<<endl;
    return 0;
}






