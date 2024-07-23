#include<iostream>
using namespace std;

int main()
{
    char name[40] = "Name is Anshul";
    //This will not take the string passed after the space. It will just terminate the string after \n
    //is encountered.
    //cin>>name;

    //This is the solution to overcome that problem. The cin.getline() method takes the array name to 
    //store the data inserted and the size. ex: cin.getline(name, 40).
    cin.getline(name,40);
    // OR getline(cin, name);
    cout<<name<<endl;
    cout<<name[7]<<endl;
    return 0;
}

//Note: There is also a delimeter argument in the cin.getline(arr, num, '\n' or '$' or any character).
//Note: cin.get() method is used to store characters. it can also store spaces, new lines, etc. hence 
//      making it more reliable than the traditional cin>>ch method of inputing the characters.


//array length function
int length(char *arr){
    int i;
    for(i=0; arr[i]!='\0'; i++){
    }
    return i;
}