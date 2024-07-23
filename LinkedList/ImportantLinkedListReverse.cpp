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

// Node* reverseList(Node* head) {
//         Node * prev = NULL;
//         Node * curr = head;
//         Node * nextN;
//         while(curr != NULL){
//             nextN = curr -> next;
//             curr -> next = prev;
//             prev = curr;
//             curr = nextN;
//         }
//         return prev;
// }

//Recursive approach
void recursiveReversing(Node * &head, Node * prev, Node * curr){
    if(curr == NULL){
        head = prev;
        return;
    }
    Node *nextN = curr->next;
    curr -> next = prev;
    prev = curr;
    curr = nextN;
    recursiveReversing(head, prev, curr);
}

Node * reverseList(Node * head){
    Node * prev = NULL;
    Node * curr = head;
    recursiveReversing(head, prev, curr);
    return head;
}

int main(){
    Node * head;
    Node * first = new Node(1, NULL);
    Node * second = new Node(2, first);
    Node * third = new Node(3, second);
    Node * fourth = new Node(4, third);

    head = reverseList(fourth);
    while(head != NULL){
        cout<<head -> data<<" ";
        head = head->next;
    }
}