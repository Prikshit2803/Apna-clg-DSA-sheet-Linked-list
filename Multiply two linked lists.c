long long  multiplyTwoLists (Node* l1, Node* l2)
{
  /*Node *cur1=reverse(l1);
   Node *cur2=reverse(l2);*/
   //cout<<cur1->data;
   long long m1=0,m2=0,m=1;
   long long mod=1000000007;
   long long temp=1;
  /* while(cur1){
       m1=(m1+(cur1->data)*temp)%mod;
       temp=(temp*10);
       cur1=cur1->next;
   }
  temp=1;
  while(cur2){
       m2=(m2+(cur2->data)*temp)%mod;
       temp=(temp*10);
       cur2=cur2->next;
   }*/
 
  while(l1){
       m1=((m1*10)%mod+l1->data);
      l1=l1->next;
   }
 // temp=1;
  while(l2){
       m2=((m2*10)%mod+l2->data);

       l2=l2->next;
   }*/
  return (m1*m2)%mod;
}

//need to work on the reverse solution
/*Node* reverse(Node * head){
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
    }*/
    
