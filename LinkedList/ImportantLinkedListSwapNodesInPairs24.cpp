#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node * next;
    
    Node(){
        this -> data = 0;
        this -> next = NULL;
    }

    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }

    Node(int data, Node * next){
        this -> data = data;
        this -> next = next;
    }

};

Node* swapPairs(Node* head) {
    Node * first = head;
    Node * dummy = new Node(0);
    Node * prev = dummy;
    prev -> next = head;

    while(first && first -> next){
        Node * second = first -> next;
        Node * future = first -> next -> next;

        second->next = first;
        prev -> next = second;
        first -> next = future;
        
        prev = first;
        first = future;
    }
    return dummy -> next;
}

int main(){
    Node * fourth = new Node(4);
    Node * third = new Node(3, fourth);
    Node * second = new Node(2, third);
    Node * first = new Node(1, second);
    Node * head = first;

    head = swapPairs(head);

    while(head != NULL){
        cout<<head -> data<<" ";
        head = head -> next;
    }

}