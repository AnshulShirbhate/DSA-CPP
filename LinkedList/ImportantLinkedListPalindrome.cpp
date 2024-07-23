#include <iostream>
#include<vector>
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

bool isPalindrome(Node *head)
{
    vector<int> arr;
    Node *temp = head;
    while (temp)
    {
        arr.push_back(temp->data);
        temp = temp->next;
    }
    arr.shrink_to_fit();
    int left = 0, right = arr.size() - 1;
    while (left < right)
    {
        if (arr[left] != arr[right])
        {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

int main()
{
    Node *head;
    Node *first = new Node(1, NULL);
    Node *second = new Node(2, first);
    Node *third = new Node(3, second);
    Node *fourth = new Node(4, third);
    head = fourth;
    cout<<(isPalindrome(head) ? "Yes" : "No");
}