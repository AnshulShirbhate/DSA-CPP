/*
    Problem definition: A number will be given by the user. The number need to be written in the standard output in words.
    Example: 
        Input: 123 
        Output: One Two Three
*/

#include<iostream>
#include<string>
#include<vector>
using namespace std;

void sayDigits(vector<string> &arr, int n){
    if(n == 0){
        return;
    }

    int digit = n%10;
    n = n/10;
    sayDigits(arr, n);
    cout<<arr[digit]<<" ";
}

int main(){
    vector<string> arr = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    sayDigits(arr, n);
}