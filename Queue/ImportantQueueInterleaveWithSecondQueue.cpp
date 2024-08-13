#include<bits/stdc++.h>
using namespace std;

void interLeaveQueue(queue < int > & q) {
    // q = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
    queue<int> q2;
    int size = q.size(); // size = 10

    for(int i=0; i<size/2; i++){
        q2.push(q.front()); // q2 = [1, 2, 3, 4, 5]
        q.pop();   // q = [6, 7, 8, 9, 10]
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