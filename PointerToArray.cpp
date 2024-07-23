#include<iostream>
using namespace std;

int main()
{
    int arr[5] = {1,2,3,4,5};

    //This will print the address of the first element of the array i.e. address of arr[0];
    cout<<arr<<endl;

    //This will print the address of the second element of the array i.e. address of arr[1];
    cout<<arr+1<<endl;

    //Defining pointer to the array i.e. 0th element of array.
    int *arrptr = arr;
    arrptr++;
    cout<<*arrptr<<endl;


    //Pointer to the entire array
    int (*ptr)[5]; //Pointer to an array of 5 elements; This is our requirement.
    //int *ptr[5]; //Array of 5 pointers. This is not our requirement here.
    ptr = &arr;

    cout<<"Pointer to array arr address: "<<ptr<<endl;
    cout<<*ptr<<endl;


    return 0;
}