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
    void deleteNode(ListNode* node) 
    {
        ListNode *temp,*next1;
        temp = node;
        next1 = temp->next;
        while(next1!=NULL)
        {
            temp->val = next1->val;
            if(next1->next==NULL)
            {
                temp->next = NULL;
            }
            temp = next1;
            next1 = next1->next;
            
        }

    }
};