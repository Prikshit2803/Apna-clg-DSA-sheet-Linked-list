class Solution
{
    public:
    //Function to remove duplicates from unsorted linked list.
    Node * removeDuplicates( Node *head) 
    {
     unordered_map<int, int> um;
     Node * prev=NULL;
     Node * cur=head;
     while(cur){
         if(um[cur->data]==1){
            prev->next=cur->next;
            cur=cur->next;
         }
         
         else{
             prev=cur;
             um[cur->data]=1;
         }
         cur=cur->next;
        
     }
     return head;
    }
};

///Another method 
Node * removeDuplicates( Node *head) 

    {

     Node *curr=head;

     Node *prev=NULL;

     unordered_set<int>s;

     while(curr!=NULL)

     {

         if(s.find(curr->data)==s.end())

         {

              s.insert(curr->data);

             prev=curr;

         }

        else

        {

             prev->next=curr->next;

             delete (curr);

        }

            curr=prev->next;

      }

     return head;

    }
