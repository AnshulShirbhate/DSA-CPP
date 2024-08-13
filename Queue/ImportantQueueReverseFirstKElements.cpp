#include<iostream>
#include<queue>
#include<stack>
using namespace std;

void reverseQueueKElements(queue<int> &q, int k){
    if(k == 1){
        return;
    }

    int num = q.front();
    q.pop();
    reverseQueueKElements(q, k-1);
    q.push(num);
}

queue<int> reverseElements(queue<int> q, int k)
{
    // Queue and K = 2
    // [1, 2, 3, 4, 5]

    // stack<int> s;

    // for(int i=0; i<k; i++){
    //     int num = q.front();
    //     q.pop();
    //     s.push(num);
    // }

    // while(!s.empty()){
    //     int num = s.top();
    //     s.pop();
    //     q.push(num);
    // }
    queue<int> q1;
    for(int i=0; i<k; i++){
        q1.push(q.front());
        q.pop();
    }
    reverseQueueKElements(q1, k);
    for(int i=0; i<k; i++){
        q.push(q1.front());
        q1.pop();
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