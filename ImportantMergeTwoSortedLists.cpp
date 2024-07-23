 #include<iostream>
 using namespace std;
 
struct ListNode{
    int val;
    ListNode *next;
    ListNode(){
        this -> val = 0;
        this -> next = NULL;
    }

    ListNode(int val){
        this -> val = val;
        this -> next = NULL;
    }

    ListNode(int val, ListNode * next){
        this -> val = 0;
        this -> next = next;
    }
};

 ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode * list3 = new ListNode();
        ListNode * head = list3;
        while(list1 != NULL && list2 !=NULL){
            if(list1->val < list2->val){
                list3-> next = new ListNode(list1->val);
                list3 = list3->next;
                list1 = list1->next;
            }else{
                list3-> next = new ListNode(list2->val);
                list3 = list3->next;
                list2 = list2->next;
            }
        }

        while(list1 != NULL){
            list3-> next = new ListNode(list1->val);
            list3 = list3->next;
            list1 = list1->next;
        }

        while(list2 != NULL){
            list3-> next = new ListNode(list2->val);
            list3 = list3->next;
            list2 = list2->next;
        }
        head = head->next;
        return head;
    }

int main(){
    ListNode * list1 = new ListNode(1);
    ListNode * 
}