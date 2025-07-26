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


void deleteNode(Node * &tail, int value){
    if(tail == NULL){
        cout<<"List is empty!"<<endl;
    } else{
        Node * prev = tail;
        Node * curr = tail -> next;

        while(curr->data != value){
            prev = curr;
            curr = curr->next;
        }

        prev -> next = curr -> next;
        if(tail == curr){
            tail = prev;
        }
        curr -> next = NULL;
        delete curr;
    }
}

void print(Node * tail){
    Node * temp = tail;
    do{
        cout<<tail -> data<<" ";
        tail = tail -> next;
    }while(tail != temp);
}

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
    Node * tail = NULL;

    insertNode(tail, 0, 1);
    insertNode(tail, 1, 2);
    insertNode(tail, 2, 3);
    insertNode(tail, 3, 4);
    insertNode(tail, 4, 5);
    cout<<cyclePresent(tail)<<endl;
    // deleteNode(tail, 1);
    print(tail);

}