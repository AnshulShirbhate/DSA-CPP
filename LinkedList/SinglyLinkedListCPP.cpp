#include<iostream>
using namespace std;

class Node{
    public:
    float data;
    Node * next;

    Node(float data){
        this -> data = data;
        this -> next = NULL;
    }

    ~Node(){
        int value = this -> data;
        if(this->next != NULL){
            delete next;
            this -> next = NULL;
        }
        cout<<"\nMemory free for node with data "<<value<<endl;
    }
};

void insertAtHead(Node * &head, float data){
    Node * temp = new Node(data);
    temp -> next = head;
    head = temp;
}


void insertAtTail(Node * &tail, float data){
    Node * temp = new Node(data);
    tail -> next = temp;
    tail = temp;
}


void insertAtPosition(Node * &head, Node * &tail, int pos, float data){
    if(pos == 1){
        insertAtHead(head, data);
        return;
    }
    int cnt = 1;
    Node * temp = head;
    while(cnt<pos-1){
        temp = temp -> next;
        cnt++;
    }
    if(temp->next == NULL){
        insertAtTail(tail, data);
        return;
    }

    Node * newNode = new Node(data);
    newNode -> next = temp -> next;
    temp -> next = newNode;
}

void deleteNode(int pos, Node * &head){
    if(pos == 1){
        Node * temp = head;
        head = head->next;
        temp -> next  = NULL;
        delete temp;
    }else{
        Node * current = head;
        Node * prev = NULL;
        int cnt = 1;
        while(cnt < pos){
            prev = current;
            current = current->next;
            cnt++;
        }
        prev -> next = current -> next;
        current -> next = NULL;
        delete current;
    }
}

void traverse(Node * head){
    cout<<"The elements of the linked list are: \n";
    while(head != NULL){
        cout<<head -> data<<" ";
        head = head -> next;
    }
}



int main()
{
    Node * node1 = new Node(1);
    Node * head = node1;
    Node * tail = node1;

    insertAtHead(head, 0);
    insertAtTail(tail, 2);
    insertAtPosition(head, tail, 4, 3);
    traverse(head);
    deleteNode(3, head);
    traverse(head);

    return 0;
}