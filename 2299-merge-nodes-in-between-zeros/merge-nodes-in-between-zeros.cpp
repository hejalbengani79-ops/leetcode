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
    ListNode* mergeNodes(ListNode* head) 
    {
        ListNode *temp,*prev;
        int sum = 0; 
        temp = head;
        head = temp->next;
        temp->next = NULL;
        temp = head;
        prev = temp;
        while(temp!=NULL)
        {
            sum = 0;
            while(temp->next->val != 0)
            {
                sum = sum + temp->val;
                if(temp == head)
                {
                    temp = temp->next;
                    prev->next = NULL;
                    prev = temp;
                    head = temp;
                }
                else
                {
                    prev->next = temp->next;
                    temp->next = NULL;
                    temp = prev->next;
                }
            }
            sum = sum + temp->val;
            temp->val=sum;
            prev = temp;
            temp = temp->next;
            prev->next = temp->next;
            temp->next = NULL;
            temp = prev->next;
        }
        return head;
    }
};