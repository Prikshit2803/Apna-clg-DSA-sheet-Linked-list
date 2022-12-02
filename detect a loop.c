
//BOTH SOLN WORK

class Solution {
public:
    bool hasCycle(ListNode *head) {
        /*vector<int> arr;
        if(head==NULL)
        return false;
        ListNode* slow = head;
        ListNode* fast=head->next;
        while(slow!=fast){
            if(fast==NULL || fast->next==NULL)
            return false;

            slow=slow->next;
            fast=fast->next->next;

        }
        return true;*/

        vector<int> arr;
        if(head==NULL)
        return false;
        ListNode* slow = head;
        ListNode* fast=head;
        //if(fast->next);
        while(fast->next && fast->next->next){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast)
            return true;
           
        }
        return false;
        
    }
};
