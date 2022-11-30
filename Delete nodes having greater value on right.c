class Solution
{
    public:
    Node* reverse(Node * head){
        if(head==NULL)
        return NULL;
        
       Node * cur=head;
        Node* prev=NULL;
        while(cur!=NULL){
            Node * temp=cur->next;
            cur->next=prev;
            prev=cur;
            cur=temp;
            
            
        }
        return prev;
    }
    
    
    Node *compute(Node *head)
    {
      head=reverse(head);
      Node *prev=head;
      Node *cur=head->next;
      while(cur!=NULL){
      if(cur->data>=prev->data){
          //prev=cur;
          prev=prev->next;
          cur=cur->next;
         // prev=prev->next;
         
      }
      
     else{
         prev->next=cur->next;
         cur=prev->next;
         
     }
      }
      head=reverse(head);
      return head;
    }
    
};
