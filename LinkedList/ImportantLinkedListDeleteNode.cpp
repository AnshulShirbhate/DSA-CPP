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

void deleteNode(Node* node) {
    node -> data = node -> next ->data;
    node -> next = node -> next -> next;
}

int main(){
    Node * first = new Node(1, NULL);
    Node * second = new Node(2, first);
    Node * third = new Node(3, second);
    Node * fourth = new Node(4, third);
    Node * fifth = new Node(5, fourth);
    Node * sixth = new Node(6, fifth);
    Node * seventh = new Node(7, sixth);
    Node * head = seventh;
    Node * temp = head;
    cout<<"Given linked list: "<<endl;
    while(temp){
        cout<<temp-> data<<" ";
        temp = temp -> next;
    }


    temp = head;
    deleteNode(fifth);
    cout<<endl<<endl<<"The linked list after deleting the element: "<<endl;
    while(temp){
        cout<<temp->data<<" ";
        temp = temp -> next;
    }
}