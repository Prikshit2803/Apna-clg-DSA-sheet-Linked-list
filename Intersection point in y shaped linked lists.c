//Refer to Striver

int intersectPoint(Node* head1, Node* head2)
{
    Node * d1=head1;
    Node* d2 = head2;
    while(d1!=d2){
        if(d1==NULL)
        d1=head2;
        
        if(d2==NULL)
        d2=head1;
        
        d1=d1->next;
        d2=d2->next;
    }
 
    return d1->data;
    //even if no intersection d1==d2 when both NULL
    
    
}

//another approach is to calculate length of both linked lists and move the longer linked list by difference and now move both dummy nodes till both nodes equal 
// and this approach is the intuition behind the approach we have used here
