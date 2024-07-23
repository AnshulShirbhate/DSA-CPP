#include<iostream>
#include<queue>
#include<stack>
using namespace std;

// queue<int> rev(queue<int>& q)
//     {   
//         int n=q.size();
//         stack<int> s;
//         for(int i=0; i<n; i++){
//             s.push(q.front());
//             q.pop();
//         }
//         for(int i=0; i<n; i++){
//             q.push(s.top());
//             s.pop();
//         }
//         return q;
//     }



void rev(queue<int>& q, int size){   
    if (size <= 1) {
        return;
    }

    int num = q.front();
    q.pop();
    rev(q, size - 1);
    q.push(num);
}  

int main(){
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    rev(q, q.size());
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
}