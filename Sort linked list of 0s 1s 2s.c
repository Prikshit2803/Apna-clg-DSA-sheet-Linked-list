Node* sortList(Node *head)
{  
    int cnt0=0,cnt1=0,cnt2=0;
    Node * cur=head;
    while(cur){
        if(cur->data==0)
            cnt0++;
    
   else if(cur->data==1)
            cnt1++;
    else if(cur->data==2)
            cnt2++;
    
    cur=cur->next;
    }

 cur=head;
while(cnt0!=0){
    cur->data=0;
    cur=cur->next;
    cnt0--;
    
}
while(cnt1!=0){
    cur->data=1;
    cur=cur->next;
    cnt1--;
    
}
while(cnt2!=0){
    cur->data=2;
    cur=cur->next;
    cnt2--;
    
}
return head;
}
