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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
      
      need to work on this approach
        /*int cnt=0;

        if(head->next==NULL)
        return NULL;

        ListNode* cur=reverse(head);
        //return cur;
        ListNode* prev=NULL;

        /*if(head->next==NULL)
        return NULL;

        while(cnt!=n-1 && cur){
            cnt++;
            prev=cur;
            cur=cur->next;
        }
        if(cur!=NULL && cur->next!=NULL)
        prev->next=cur->next;

        if(cur->next==NULL)
        prev->next=NULL;
        
         head=reverse(cur);
        return head;*/

         The following approach works 
        int cnt=0;
         ListNode * start= new ListNode();
           start->next=head;
         ListNode* cur=start->next;

         if(n==1 && head->next==NULL||head==NULL) return NULL;
        while(cur && cur->next){
            cur=cur->next;
            cnt++;
        }
        int k=cnt-n;
        if(k<0){
            return head->next;
        }
        ListNode* c=start->next;
       /* while(k>=0){
           // p=c;
            c=c->next;
            k--;
        }*/
        for(int i=0;i<k;i++){
            c=c->next;
            
        }
        c->next=c->next->next;
        return start->next;
           
// approach works
           ListNode * start= new ListNode();
           start->next=head;
         ListNode* f=start;
          ListNode* s=start;

          int k=n;
          for(int i=0;i<k;i++){
            f=f->next;
            
        }

        while(f->next!=NULL)
        {
             f=f->next;
            s=s->next;
           
        }
        
        s->next=s->next->next;
        return start->next;
        
    }

        return start->next;

    }
};

//Slight changes

int cnt=0;
         /*ListNode * start= new ListNode();
           start->next=head;*/
         ListNode* cur=head;

         if(n==1 && head->next==NULL||head==NULL) return NULL;
        while(cur && cur->next){
            cur=cur->next;
            cnt++;
        }
        int k=cnt-n;
        if(k<0){
            return head->next;
        }
        ListNode* c=head;
        while(k>0){
           // p=c;
            c=c->next;
            k--;
        }
       /* for(int i=0;i<k;i++){
            c=c->next;
            
        }*/
        c->next=c->next->next;
        return head;
