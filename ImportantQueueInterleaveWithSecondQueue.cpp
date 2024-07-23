#include<bits/stdc++.h>
using namespace std;

void interLeaveQueue(queue < int > & q) {
    queue<int> q2;
    int size = q.size();
    for(int i=0; i<size/2; i++){
        q2.push(q.front());
        q.pop();
    }

    while(!q2.empty()){
        q.push(q2.front());
        q2.pop();
        q.push(q.front());
        q.pop();
    }
}

int main(){
    queue<int> q;
    for(int i=0; i<10; i++){
        q.push(i+1);
    }
    interLeaveQueue(q);
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
}