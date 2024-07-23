#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node * next;

    Node(int data){
        this-> data = data;
        this -> next = NULL;
    }

    ~Node(){
        if(this -> next != NULL){
            delete next;
            this -> next = NULL;
        }
    }
};


bool isCircular(Node* head){
    if(head == NULL){
        return true;
    }
    // Write your code here.
    Node * temp = head -> next;
    do{
        if(temp == NULL){
            return false;
        } 
        temp = temp->next;
    }while(temp != head);
    return true;
}

void insertNode(Node *&tail , int after, int data){
    if(tail == NULL){
        Node * newNode = new Node(data);
        tail = newNode;
        newNode -> next = tail;
    } else{
        Node * curr = tail;
        while(curr -> data != after){
            curr = curr -> next;
        }
        Node * temp = new Node(data);
        temp -> next = curr -> next;
        curr -> next = temp;
        
    }
}


int main(){
    Node * tail = NULL;

    insertNode(tail, 0, 1);
    insertNode(tail, 1, 2);
    insertNode(tail, 2, 3);
    insertNode(tail, 3, 4);
    cout<<(isCircular(tail)? "List is circular": "List is not circular");
}