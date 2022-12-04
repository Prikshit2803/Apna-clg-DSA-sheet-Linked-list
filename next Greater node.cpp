//Leetcode soln
//We reverse list and use a stack to maintain the greatest value so far and push it into array but if stack empty that means it is biggest element and 
//we just push 0 onto array


class Solution {
public:
    
    ListNode* reverseAll(ListNode* head)
    {
        ListNode* prev=NULL;
        ListNode* curr=head;
        ListNode* temp;
        
        while(curr!=NULL)
        {
            temp=curr->next;
            curr->next=prev;
            
            prev=curr;
            curr=temp;
        }
        
        return prev;
    }
    vector<int> nextLargerNodes(ListNode* head) {
        ListNode* ans=reverseAll(head);
        vector<int> ans1;
        stack<int> st;
        while(ans!=NULL)
        {
            while(!st.empty() && ans->val>=st.top())
            {
                st.pop();
            }
            
            if(st.empty())
            {
                ans1.push_back(0);
            }
            else
            {
                ans1.push_back(st.top());
            }
            st.push(ans->val);
            ans=ans->next;
        }
        reverse(ans1.begin(),ans1.end());
        return ans1;
    }
};


//Mah slon simple and straightforward but not that quick
class Solution {
public:
    vector<int> nextLargerNodes(ListNode* head) {
        ListNode* cur=head;
        ListNode* prev;
        vector<int> ans;
        while(cur->next){
            prev=cur->next;
            while(prev){
                if(prev->val>cur->val){
                    ans.push_back(prev->val);
                    break;
                }
                else
                prev=prev->next;
            }
            if(prev==NULL)
            ans.push_back(0);
            cur=cur->next;
        }
         ans.push_back(0);
         return ans;
    }
};
