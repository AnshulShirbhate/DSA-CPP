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


Node* findMid(Node* head) {
    Node* slow = head;
    Node* fast = head -> next;
    
    while(fast != NULL && fast -> next != NULL) {
        slow = slow -> next;
        fast = fast -> next -> next; 
    }
    return slow;
}

Node* merge(Node* left, Node* right) {
    
    if(left == NULL)
        return right;
    
    if(right == NULL)
        return left;
    
    Node* ans = new Node(-1, NULL);
    Node* temp = ans;

    while(left != NULL && right != NULL) {
        if(left -> data < right -> data ) {
            temp -> next = left;
            temp = left;
            left = left -> next;
        }
        else
        {
            temp -> next = right;
            temp = right;
            right = right -> next;
        }
    }
    
    while(left != NULL) {
        temp -> next = left;
        temp = left;
        left = left -> next;
    }
    
    while(right != NULL) {
        temp -> next = right;
        temp = right;
        right = right -> next;
    }
    
    ans = ans -> next;
    return ans;
    
}


Node* mergeSort(Node *head) {
 
    if( head == NULL || head -> next == NULL ) {
        return head;
    }

    Node* mid = findMid(head);
    
    Node* left = head;
    Node* right = mid->next;
    mid -> next = NULL;

    left = mergeSort(left);
    right = mergeSort(right);
    
    Node* result = merge(left, right);
    
    return result;
}


int main(){
    Node * head;
    Node * first = new Node(1, NULL);
    Node * second = new Node(2, first);
    Node * third = new Node(3, second);
    Node * fourth = new Node(4, third);
    Node * fifth = new Node(5, fourth);
    Node * sixth = new Node(6, fifth);
    Node * seventh = new Node(7, sixth);
    head = seventh;
    Node * ans = mergeSort(head);

    while(ans != NULL){
        cout<<ans -> data<<" ";
        ans = ans->next;
    }
}