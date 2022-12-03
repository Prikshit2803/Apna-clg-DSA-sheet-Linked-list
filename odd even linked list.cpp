//leetcode good soln
class Solution {
public:
    ListNode* oddEvenList(ListNode* head) 
    {
        if(head==NULL or head->next==NULL or head->next->next==NULL)
            return head;

        ListNode* evenHead = head->next;

        ListNode* runner = head;
        ListNode* temp1;
        ListNode* temp2;

        while(runner->next!=NULL and runner->next->next!=NULL)
        {
            temp1 = runner->next;
            runner->next = temp1->next;
            temp1->next = runner->next->next;

            runner=runner->next;
        }

        runner->next = evenHead;

        return head;


    }
};


//my solution
public:
    ListNode* oddEvenList(ListNode* head) {

        if(head==NULL || head->next==NULL)
        return head;
        
        ListNode* od=head;
        ListNode * evn=head->next;
        ListNode * evnstart=evn;;
        ListNode * cur;
             ListNode * tmp;

        while(evn && od && evn->next && od->next){
            //cout<<evn->val;
            od->next=evn->next;
            od=od->next;
            if(od!=NULL){
            evn->next=od->next;
            evn=evn->next;
            }
           

        }
       
     od->next=evnstart;
   

    return head;

      


    
        
        
    }
};
