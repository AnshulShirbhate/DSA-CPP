/* What happens in reference variables is that a variable is declared and another variable is declared
which stores the adress of same bucket or both variables are pointing towards the same bucket
and hence if we change the value of either one of the bucket the value is updated in both the buckets.*/

#include<iostream>
using namespace std;

int main()
{
    int x = 10;

    //You must initialize the reference variable when declaring otherwise error will be thrown.
    int &y = x;

    cout<<x<<endl;
    cout<<y<<endl;

    y++;
    cout<<x<<endl;
    return 0;
}