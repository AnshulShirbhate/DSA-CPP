/*
    Declaration of queue:

        queue<data_type> queue_name;


    Various methods of queue: 

        1. .push(data): Push the data at front of the queue.
        2. .pop(): Pops the data the front of the queue.
        3. .size(): Returns the size of the queue.
        4. .empty(): Returns 1 is queue is empty and 0 if not empty. 
        5. .front(): Returns the element at the front of the queue.
*/


#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<string> que;

    que.push("Anshul");
    que.push("Shailesh");
    que.push("Shirbhate");

    cout<<"\n"<<que.front();

    cout<<"\n"<<que.size();

}