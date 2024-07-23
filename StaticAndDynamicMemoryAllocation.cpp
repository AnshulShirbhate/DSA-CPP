/*

    When a program starts it brings two memories with it 1. Stack memory    2. Heap memory.
    The stack memory brought is very less as compared to heap memory. So when we declare an array like this int arr[n], if the user 
    inputs some value which is very large and cannot be handled by the stack memory then the app will crash and this is why this way
    of assignment of memory for an array is bad practice.

    In this scenario we can use heap memory which can be used with the help of new keyword. 
    int n;
    cin>>n;
    int *arr = new int[n];
    Heap always returns a starting address that is why we have created a pointer variable to store address.
    This is dynamic memory allocation.

    In simple terms, the memory created in stack storage is static memory allocation and the memory created in heap storage is dynamic 
    memory allocation.

    Difference between heap and stack memory:
    When we declare a variable in stack like this 
        int arr[5]; It takes 4*5 bytes i.e. 20 bytes of memory.

    When we declare a variable in heap memory:
        int *arr = new int[5]; It takes 4*5 bytes i.e. 20 bytes + 8 bytes in stack for *arr declaration.
        So the total memory taken by the heap memory is always 8 bytes greater than the stack memory as we are using heap as well
        as stack memory.



    Some things to remember:

    case 1:
    while(true){
        int i= 5;
    }
    What happens in this is that everytime the while loop hits the lower curly bracket the memory is freed or released so there is no
    problem in this just the program will be in an infinite loop.


    case 2:
    while(true){
        int *i = new int;
    }
    In this case on the other hand the program is creating a new heap memory everytime and the memory is not freeing up on itself.
    When the heap memory is full the program crashes.
    In heap memory we have to use the delete keyword to delete a memory space.
    Example:
    case 3:
    while(true){
        int *i = new int;
        delete i;
    }

    Note: The memory of stack is released automatically or freed automatically but this is not the case with heap memory.
          We have to use the delete keyword to release the memory utilized in heap memory.

*/

#include<iostream>
using namespace std;

int main(){
    int arr[5] = {0}; //This is static memory allocation.
    int n;
    cin>>n;
    int arr2[n]; // This is bad practice as it is compiler specific and is not given in the original c++ language;
    int *arr3 = new int[n]; // This is good practice for dynamic memory allocation for array.
    delete[] arr3;
}
