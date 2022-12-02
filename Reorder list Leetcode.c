//Source Neetcode: https://www.youtube.com/watch?v=S5bfdUTrKLM

class Solution {

    ListNode* reverse(ListNode * head){
        if(head==NULL)
        return NULL;
        
       ListNode * cur=head;
        ListNode* prev=NULL;
        while(cur!=NULL){
            ListNode * temp=cur->next;
            cur->next=prev;
            prev=cur;
            cur=temp;
            
            
        }
        return prev;
    }
public:
    void reorderList(ListNode* head) {
        //cout<<5/2; is 2
        /*ListNode* cur = head;
        ListNode* prev = NULL;
        int n=0;
        while(cur){
         n++;
         //prev=cur;
         cur=cur->next;
        }
        int k;
        if(n/2==0){
            k=(n/2)-1;
        }
        else
        k=n/2;
      

      ListNode* t = head;
      ListNode* p = head;
          
          while(k>0){
         t=t->next;
         k--;


          }
          ListNode* c=reverse(t);
           ListNode* prev2 = head;


          while(t){
               prev=p->next;
              p->next=t;
            prev2=t->next;
              t=t->next;
              prev2=prev;
              p=prev;

          }*/

           ListNode * slow = head;
           ListNode * fast = head->next;

           while(fast && fast->next){
               slow=slow->next;
               fast=fast->next->next;
           }

           ListNode* sec=slow->next;
           slow->next=NULL;
            ListNode* tmp=NULL;
             ListNode* prev=NULL;

        
           while(sec){
                tmp=sec->next;
                sec->next=prev;

                prev=sec;                      
                sec=tmp;
           }
          //sec=reverse(sec);


          //t is now head of reversed list
           ListNode * tmp1 = NULL;
           ListNode * tmp2 = NULL;

          while(prev){
              tmp1=head->next;
              tmp2=prev->next;

              head->next=prev;
              prev->next=tmp1;

              head=tmp1;
              prev=tmp2;

          }


    }
};
