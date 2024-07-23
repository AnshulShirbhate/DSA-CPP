#include<iostream>
#include<queue>
#include<stack>
using namespace std;

queue<int> reverseElements(queue<int> q, int k)
{
    // stack<int> s;

    // for(int i=0; i<k; i++){
    //     int num = q.front();
    //     q.pop();
    //     s.push(num);
    // }

    // while(!s.empty()){
    //     int val = s.top();
    //     s.pop();
    //     q.push(val);
    // }

    // int t = q.size()-k;
    // while(t--){
    //     int val = q.front();
    //     q.pop();
    //     q.push(val);
    // }
    // return q;

    stack<int> s;

    for(int i=0; i<k; i++){
        int num = q.front();
        q.pop();
        s.push(num);
    }

    while(!s.empty()){
        int num = s.top();
        s.pop();
        q.push(num);
    }

    for(int i=0; i<q.size()-k; i++){
        int num = q.front();
        q.pop();
        q.push(num);
    }

    return q;
}

int main(){
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    queue<int> q2 = q;
    q2 = reverseElements(q2, 2);
    while(!q2.empty()){
        cout<<q2.front()<<" ";
        q2.pop();
    }
}