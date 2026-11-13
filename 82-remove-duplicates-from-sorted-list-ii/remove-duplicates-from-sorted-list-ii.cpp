/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) 
    {
        ListNode *temp,*prev;
        if(head == NULL)
        {
            return head;
        }
        if(head->next == NULL)
        {
            return head;
        }
        temp = head;
        int hash[201]={0};
        while(temp!=NULL)
        {
            hash[temp->val + 100]++;
            temp = temp->next;
        }
        temp = head;
        prev = head;
        while(temp!=NULL)
        {
            if(hash[temp->val+100]==1)
            {
                prev = temp;
                temp = temp->next;
            }
            else
            {
                if(temp==head)
                {
                    head = temp->next;
                    temp->next = NULL;
                    temp = head;
                }
                else
                {
                    prev->next = temp->next;
                    temp->next = NULL;
                    temp = prev->next;
                }
            }
        }
        return head;
    }
};