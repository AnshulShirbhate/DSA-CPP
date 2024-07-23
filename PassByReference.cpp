#include<iostream>
using namespace std;

//Using pointer
void changemoneyptr(int * moneyaddr){
    *moneyaddr = *moneyaddr + 10;
    cout<<"Changed Money: "<<*moneyaddr<<endl;
}

//Using Reference variable
void changemoneyref(int &money){
    money = money + 10;
    cout<<"Changed Money: "<<money<<endl;
}

int main()
{
    
    int money = 10;
    cout<<"Real Money: "<<money<<endl;
    //Using pointer
    // changemoney(&money);
    //Using Reference variable
    changemoneyref(money);
    return 0;
}