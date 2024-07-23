/* 
    Note: Dequeue stands for double ended queue in which you can push and pop elements in the front as
    well as the back of the queue unlike the normal queue in which you can only push and pop from the
    front.

    It is also dynamic like vector. 

    All the things that can be done on a vector can be done on Deque but with additional methods like push_front and pop_front.

*/ 

#include<iostream>
#include<deque>
using namespace std;

int main()
{
    deque<int> d;

    d.push_back(1);
    d.push_front(0);
    for(int i:d){
        cout<<d[i]<<" ";
    }


    d.pop_back();
    d.pop_front();
    cout<<endl;
    for(int i:d){
        cout<<d[i]<<" ";
    }

    cout<<endl;
    if(d.empty()){
        cout<<"Empty";
    }else{
        cout<<"Not Empty";
    }
    return 0;
}