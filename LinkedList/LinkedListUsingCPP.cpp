// #include <iostream>
// using namespace std;

// class Node{
//     public:
//         int data;
//         Node * next;

//     Node(int data){
//         this -> data = data;
//         this -> next = NULL;
//     }

//     ~Node(){
//         int value = this -> data;
//         if(this -> next != NULL){
//             delete next;
//             this -> next = NULL;
//         }
//     }
// };

// void traverse(Node * &head){
//     Node * temp = head;
//     cout<<"The elements in the linked list are: ";
//     while(temp != NULL){
//         cout<<temp->data<<" ";
//         temp = temp->next;
//     }
// }

// void insertAtHead(Node * &head, int data){
//     Node * newNode = new Node(data);
//     newNode -> next = head;
//     head = newNode;
// }

// void insertAtTail(Node * &tail, int data){
//     Node * newNode = new Node(data);
//     tail -> next = newNode;
//     tail = newNode;
// }

// void insertAtPosition(Node * &head, Node * &tail, int data, int pos){
//     if(pos == 1){
//         insertAtHead(head, data);
//         return;
//     }
//     Node * temp = head;
//     int cnt = 1;
//     while(cnt<pos-1){
//         temp = temp -> next;
//         cnt++;
//     }
//     if(temp -> next == NULL){
//         insertAtTail(tail, data);
//         return;
//     }
//     Node * newNode = new Node(data);
//     newNode -> next = temp -> next;
//     temp -> next = newNode;
    
// }

// void deleteAtPosition(Node * &head, Node* &tail, int pos){
    
//     if(pos == 1){
//         Node * temp = head;
//         head = head -> next;
//         temp -> next = NULL;
//         delete temp;
//     }else{
//         Node * curr = head;
//         Node * prev = NULL;
//         int cnt = 1;
//         while(cnt < pos){
//             prev = curr;
//             curr = curr -> next;
//             cnt++;
//         }
//         if(curr -> next == NULL){
//             tail = prev;
//         }
//         prev -> next = curr -> next;
//         curr -> next = NULL;
//         delete curr;
//     }
    
// }

// int main(){
//     Node * firstNode = new Node(1);
//     Node * head = firstNode;
//     Node * tail = firstNode;

//     insertAtTail(tail, 2);
//     insertAtTail(tail, 3);
//     insertAtTail(tail, 4);
//     insertAtPosition(head, tail, 5, 2);
//     insertAtPosition(head, tail, 6, 1);
//     insertAtPosition(head, tail, 7, 7);
//     deleteAtPosition(head, tail, 7);
//     traverse(head);

//     cout<<"\nHead: "<<head->data;
//     cout<<"\nTail: "<<tail->data;
    
// }



#include <iostream>
using namespace std;

class Node{
    public:
        int data;
        Node * next;

        Node(int data){
            this -> data = data;
            this -> next = NULL;
        }

        ~Node(){
            if(this -> next != NULL){
                delete next;
                this -> next = NULL;
            }
        }
};

void insertAtHead(Node * &head, int data){
    Node * newNode = new Node(data);
    newNode -> next = head;
    head = newNode;
}

void insertAtTail(Node * tail, int data){
    Node * newNode = new Node(data);
    tail -> next = newNode;
    tail = newNode;
}

void insertAtPosition(Node * &head, Node * &tail, int position, int data){
    if(position == 1){
        insertAtHead(head, data);
        return;
    }else{
        int cnt=1;
        Node * temp = head;
        while(cnt < position-1){
            temp = temp -> next;
            cnt++;
        }
        if(temp == NULL){
            insertAtTail(tail, data);
            return;
        }
        Node * newNode = new Node(data);
        newNode -> next = temp -> next;
        temp -> next = newNode;
    }
}

void deleteNode(Node * &head, Node * &tail, int position){
    if(position == 1){
        Node * temp = head;
        head = temp->next;
        temp -> next = NULL;
        delete temp;
    }else{
        int cnt=1;
        Node * prev = NULL;
        Node * curr = head;
        while(cnt < position){
            prev = curr;
            curr = curr -> next;
            cnt++;
        }
        prev -> next = curr -> next;
        curr -> next = NULL;
        delete curr;
    }
}

void traverse(Node * &head){
    Node * temp = head;
    cout<<"Elements in the linked list are: \n";
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}


int main(){
    Node * firstNode = new Node(1);
    Node * head = firstNode;
    Node * tail = firstNode;
    insertAtHead(head, 0);
    insertAtTail(tail, 2);
    insertAtPosition(head, tail, 4, 3);
    deleteNode(head, tail, 4);
    traverse(head);
}