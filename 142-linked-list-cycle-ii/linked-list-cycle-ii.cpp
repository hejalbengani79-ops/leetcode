/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) 
    {
        
        ListNode *temp;
        int count=0;
        vector<ListNode*> vec;
        temp = head;
        while(temp!=NULL)
        {
            for(int i=count-1; i>=0; i--)
            {
                if(vec[i]==temp)
                {
                    head = temp;
                    return head;
                }
            }
            vec.push_back(temp);
            count++;
            temp = temp->next;
        }
        return NULL;
    }
};