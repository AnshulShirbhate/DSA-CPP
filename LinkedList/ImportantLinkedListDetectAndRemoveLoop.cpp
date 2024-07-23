#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data, Node *nextNode)
    {
        this->data = data;
        this->next = nextNode;
    }
};

Node *findIntersection(Node *head)
{
    Node *fast = head;
    Node *slow = head;

    while (fast && fast->next)
    {
        fast = fast->next->next;
        slow = slow->next;
        if (slow == fast)
        {
            return slow;
        }
    }
    return NULL;
}

Node *detectCycle(Node *head)
{
    Node *intersection = findIntersection(head);
    if (intersection == NULL)
        return NULL;
    cout<<"Loop Detected"<<endl;
    Node *slow = head;
    while (slow)
    {
        if (slow == intersection)
        {
            return slow;
        }
        slow = slow->next;
        intersection = intersection->next;
    }
    return NULL;
}

void removeCycle(Node * startOfCycle){
    Node * temp = startOfCycle;
    while(temp -> next != startOfCycle){
        temp  = temp -> next;
    }
    temp -> next = NULL;
}

void print(Node * head){
    while(head != NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
}

int main()
{
    Node *head;
    Node *fourth = new Node(4, NULL);
    Node *third = new Node(3, fourth);
    Node *second = new Node(2, third);
    Node *first = new Node(1, second);
    head = first;

    // Generating a cycle from second node.
    fourth->next = second;

    Node * startOfCycle = detectCycle(head);
    if(startOfCycle == NULL){
        cout<<"No cycle is present"<<endl;
        return 0;
    }else{
        cout<<"Cycle starts at: "<<startOfCycle->data<<endl;
    }

    cout<<"After removing cycle: "<<endl;
    removeCycle(startOfCycle);
    print(head);
}