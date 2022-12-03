
///My code
Node* reverseDLL(Node * head)
{
    Node* cur=head;
    Node * t1=NULL;
        Node * t2=NULL;
    Node* pv=NULL;
    while(cur){
        t1=cur->next;
        t2=cur->prev;
        cur->next=cur->prev;
        cur->prev=t1;
        pv=cur;
        cur=t1;
        
    }
    return pv;
    
    
}

//Optimised code
Node* reverseDLL(Node * head)

{



    Node* prev = NULL;

     Node* curr = head;

    if(head==NULL||head->next==NULL)

    return head;

     while(curr!=NULL)

     {

         prev = curr->prev;

         curr->prev = curr->next;

         curr->next = prev;

         curr = curr->prev;

     }

     return prev->prev;

}
