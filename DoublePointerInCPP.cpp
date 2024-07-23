#include <iostream>
using namespace std;

int main(){
    int data = 5;
    int *dataPtr = &data;
    int **dataPtr2 = &dataPtr;

    cout<<data<<endl;
    cout<<*dataPtr<<endl;
    cout<<**dataPtr2<<endl;
}