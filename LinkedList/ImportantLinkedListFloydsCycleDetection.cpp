//Floyd's cycle detection algorithm is nothing but using the fast and slow pointer approach.

#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node * next;

    Node(int data, Node * nextNode){
        this -> data = data;
        this -> next = nextNode;
    }
};


bool cyclePresent(Node * head){
    Node * slow = head;
    Node * fast = head;
    while(fast && fast->next){
        fast = fast->next->next;
        slow = slow->next;
        if(slow == fast){
            return true;
        }
    }
    return false;
}


int main(){
    Node * head;
    Node * fourth = new Node(4, NULL);
    Node * third = new Node(3, fourth);
    Node * second = new Node(2, third);
    Node * first = new Node(1, second);

    // Generating a cycle from second node.
    fourth ->next = second;

    head = first;
    if(cyclePresent(head)){
        cout<<"Cycle is present";
    }else{
        cout<<"Cycle is not present";
    }
}