
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


// Slow and Fast pointer approach. Optimal solution O(N/2)
// Node * middleElement(Node * head){
//     Node * slow = head;
//     Node * fast = head;

//     while(fast && fast -> next){
//         fast = fast -> next;
//         if(fast->next != NULL){
//             fast = fast->next;
//         }
//         slow = slow->next;
//     }
//     return slow;
// }

// Second approach. O(N)
Node * middleElement(Node * head){
    Node * temp = head;
    int cnt=0;
    while(temp != NULL){
        cnt++;
        temp = temp -> next;
    }
    int mid = (cnt/2) + 1;
    while(mid-1>0){
        head = head -> next;
        mid--;
    }
    return head;
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

    Node * middle = middleElement(seventh);
    cout<<middle -> data;
}