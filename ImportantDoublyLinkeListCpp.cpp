#include<iostream>
using namespace std;

class Node{
    public:
    float data;
    Node * next;
    Node * prev;

    Node(float data){
        this -> data = data;
        this -> next = NULL;
        this -> prev = NULL;
    }

    ~Node(){
        float value = this -> data;
        if(next != NULL){
            delete next;
            next = NULL;
        }
        cout<<"Memory freed for node with data "<<value<<endl;
    }
};

void insertAtHead(Node * &head, Node * &tail, float data){
    if(head == NULL){
        Node * temp = new Node(data);
        head = temp;
        tail = head;
    }else{
        Node * newNode = new Node(data);
        newNode -> next = head;
        head -> prev = newNode;
        head = newNode;
    }
    
}

void insertAtTail(Node * &head, Node * &tail, float data){
    if(tail == NULL){
        Node * temp = new Node(data);
        tail = temp;
        head = temp;
    }else{
        Node * newNode = new Node(data);
        tail -> next = newNode;
        newNode -> prev = tail;
        tail = newNode;
    }
    
}

void insertAtPos(Node * &head, Node * &tail, int pos, float data){
    if(pos == 1){
        insertAtHead(head, tail, data);
        return;
    }
    int cnt = 1;
    Node * temp = head;
    while(cnt < pos-1){
        temp = temp->next;
        cnt++;
    }
    if(temp -> next == NULL && temp -> prev != NULL){
        insertAtTail(head, tail, data);
        return;
    }

    Node * newNode = new Node(data);

    newNode -> next = temp -> next;
    newNode -> prev = temp;
    temp -> next = newNode;
    temp -> next -> prev = newNode;
}

void deleteNode(Node * &head, Node * &tail, int pos){
    Node * temp = head;
    if(pos == 1){
        head = temp -> next;
        temp -> next -> prev = NULL;
        temp -> next = NULL;
        delete temp;
    }else{
        int cnt = 1;
        while(cnt<pos){
            temp = temp -> next;
            cnt++;
        }
        if(temp -> next == NULL && temp -> prev != NULL){
            temp -> prev -> next = NULL;
            temp -> prev = NULL;
            delete temp;
            return;
        }
        temp -> next -> prev = temp -> prev;
        temp -> prev -> next = temp -> next;
        temp -> next = NULL;
        temp -> prev = NULL;
        delete temp;
    }
}

void traverse(Node * head){
    cout<<"Elements of Linked List are: \n";
    while(head != NULL){
        cout<<head -> data <<" ";
        head = head -> next;
    }
}

int main()
{
    Node * head = NULL;
    Node * tail = NULL;
    insertAtHead(head, tail, 0);
    insertAtHead(head, tail, -1);
    insertAtHead(head, tail, -2);
    insertAtTail(head, tail, 2);
    insertAtPos(head, tail, 5, 3);
    deleteNode(head, tail, 5);
    deleteNode(head, tail, 2);
    deleteNode(head, tail, 1);
    traverse(head);
    return 0;
}