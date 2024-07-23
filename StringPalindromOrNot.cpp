#include<iostream>
using namespace std;

void isPalindromeOrNot(char str[], int size){
    int halfSize = size/2, i=0;
    while(halfSize){
        if(str[i] != str[size-2-i]){
            cout<<"\nString is not a palindrome!";
            break;
        }else{
            i++;
            halfSize--;
        }
    }

    if(halfSize <= 0){
        cout<<"\nString is palindrome!";
    }
}

int main(){
    char str[] = "";
    int size = sizeof(str);
    
    isPalindromeOrNot(str, size);

}