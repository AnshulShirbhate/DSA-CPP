ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int> elements;

        for(int i=0; i<lists.size(); i++){
            ListNode * temp = lists[i];
            while(temp){
                elements.push_back(temp->val);
                temp = temp -> next;
            }
        }
        sort(elements.begin(), elements.end());
        ListNode * newHead = NULL;
        ListNode * tail = newHead;
        
        for(int i=0; i<elements.size(); i++){
            if(newHead == NULL){
                newHead = new ListNode(elements[i]);
                tail = newHead;
            }else{
                ListNode * temp = new ListNode(elements[i]);
                tail -> next = temp;
                tail = temp;
            }
        }
    

        return newHead;
    }