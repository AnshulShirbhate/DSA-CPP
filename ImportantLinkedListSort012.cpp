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


Node* sortList(Node *head){
    // Write your code here.
    int zeroCount = 0;
    int oneCount = 0;
    int twoCount = 0;

    Node * temp = head;
    while(temp){
        if(temp -> data == 0) {
            zeroCount++;
        } else if (temp->data == 1) {
            oneCount++;
        } else if (temp->data == 2){
            twoCount++;
        }
        temp = temp->next;
    }

    temp = head;
    while(temp){
        if(zeroCount!=0) {
            temp -> data = 0;
            zeroCount--;
        }
        else if(oneCount != 0){
            temp -> data = 1;
            oneCount--;
        } 
        else if(twoCount != 0){
            temp -> data = 2;
            twoCount--;
        }
        temp = temp -> next;
    }

    return head;
}

int main(){
    Node * first = new Node(1, NULL);
    Node * second = new Node(2, first);
    Node * third = new Node(0, second);
    Node * fourth = new Node(0, third);
    Node * fifth = new Node(2, fourth);
    Node * sixth = new Node(1, fifth);
    Node * seventh = new Node(2, sixth);
    Node * head = seventh;

    sortList(head);
    cout<<"After Sorting: "<<endl;
    Node * temp = head;
    while(temp){
        cout<<temp->data<<" ";
        temp = temp -> next;
    }
}