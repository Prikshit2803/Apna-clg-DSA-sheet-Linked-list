//Source video : https://www.youtube.com/watch?v=w9zx17QlPK0

class Solution
{
    public:
    Node *zigZag(Node* head)
    {
      if(head==NULL or head->next==NULL){

            return head;

        }

       int flag = 1;
       // if flag = 1 we want our element to be smaller than next and flag=0 means we want temp to be bigger than next element
       
       Node* temp= head;
       while(temp->next!=NULL){
           if(flag){
               if(temp->data > temp->next->data)
               swap(temp->data,temp->next->data);
               
               flag=0;
           }
           else{
               if(temp->data < temp->next->data)
               swap(temp->data,temp->next->data);
               
               flag=1;
               
           }
           temp=temp->next;
       }
       return head;
    }
};
