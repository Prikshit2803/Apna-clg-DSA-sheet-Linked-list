// refer to this as why the else loop on first soln (if loop formed with head) :https://www.youtube.com/watch?v=uU69oIguTN0
class Solution
{ 
    public:
    
  
    //Function to remove a loop in the linked list.
    void removeLoop(Node* head)
    {
            Node * slow=head;
            Node * fast=head;
            Node* cur =head;
            //Node* prev =NULL;
            /*while(slow!=fast){
                if(fast==NULL && fast->next==NULL)
                return ;
                
                slow=slow->next;
                fast=fast->next->next;
                
               
            }*/
            
            bool check=false;
            
            while(fast && fast->next){
                slow=slow->next;
                fast=fast->next->next;
                
                if(slow==fast){
                  check=true;
                   break;
                }
                
            
                
            }
            //return;
            
            if(!check)
            return;
            
           //if loop fails when slow and fast meet at head
            if(cur!=slow){
            while(cur->next!=slow->next){
                
                cur=cur->next;
                slow=slow->next;
            }
            
            slow->next=NULL;
            }
            else{
            while(slow->next!=cur){
                slow=slow->next;
            }
            slow->next=NULL;
            return;
            
        }
            //return;
            
            // THis is the 2nd working soln
            /* Node* slow=head;
        Node* fast=head->next;
        while( fast->next && fast->next->next && slow!=fast)
        {
            slow=slow->next;
            fast=fast->next->next;
            
            
        }
        
        if(slow!=fast)
            return ;
        slow=head;
        while(slow!=fast->next)
        {
            slow=slow->next;
            fast=fast->next;
        }
        
        fast->next=NULL;*/
            
    }
