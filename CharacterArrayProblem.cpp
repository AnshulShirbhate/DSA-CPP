#include<iostream>
using namespace std;

void ReadLine(char *arr, int len, int delim='\n'){
    int count = 0;
    char ch;
    while(true){
        ch = cin.get();
        arr[count] = ch;
        if(ch==delim || count ==len-1){
            break;
        }
        count++;
    }
    arr[count] = '\0';
}

int main()
{
    char arr[100];
    ReadLine(arr, 100);

    cout<<arr<<endl;
    return 0;
}