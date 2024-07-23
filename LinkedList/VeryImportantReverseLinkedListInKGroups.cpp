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

Node* kReverseWithSize(Node * head, int size, int k){

    if(head == NULL || k > size){
        return head;
    }

    Node * prev = NULL;
    Node * curr = head;
    Node * next = NULL;
    int cnt=0;
    while(curr != NULL && cnt<k){
        next = curr->next;
        curr -> next = prev;
        prev = curr;
        curr = next;
        cnt++;
    }

    if(next != NULL){
        head -> next = kReverseWithSize(next, size-k, k);
    }
    return prev;
}

Node* kReverse(Node* head, int k) {
    int size = 0;
    Node * temp = head;
    while(temp){
        size++;
        temp = temp -> next;
    }
    return kReverseWithSize(head, size, k);
}

int main(){
    Node * first = new Node(1, NULL);
    Node * second = new Node(2, first);
    Node * third = new Node(3, second);
    Node * fourth = new Node(4, third);
    Node * fifth = new Node(5, fourth);
    Node * sixth = new Node(6, fifth);
    Node * seventh = new Node(7, sixth);
    Node * eighth = new Node(8, seventh);
    Node * head = eighth;
    Node * temp = head;
    cout<<"Given linked list: "<<endl;
    while(temp){
        cout<<temp-> data<<" ";
        temp = temp -> next;
    }

    temp = kReverse(head, 2);
    cout<<endl<<endl<<"The linked list after reversing in k groups: "<<endl;
    while(temp){
        cout<<temp->data<<" ";
        temp = temp -> next;
    }
}