#include <iostream>
using namespace std;

int main(){
    int n1=0,n2=1,n3,n;
    cout<<"Enter the value for N: ";
    cin>>n;

    cout<<endl<<"The fibonacci series upto "<<n<<" is: "<<endl;

    cout<<n1<<" "<<n2;

    for(int i=2;i<n;i++){
        n3 = n1 + n2;
        n1 = n2;
        n2 = n3;
        cout<<" "<<n3;
    }

    return 0;
}