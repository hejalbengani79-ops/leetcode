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
        ListNode *temp,*curr;
        if(head==NULL)
        {
            return head;
        }
        else
        {
            temp = head;
            while(temp->next!=NULL)
            {
                while(temp->val==temp->next->val)
                {
                    if(temp->next->next==NULL)
                    {
                        temp->next=NULL;
                        return head;
                    }
                    curr = temp->next;
                    temp->next=temp->next->next;
                    curr->next=NULL;
                    delete curr;
                }
                temp = temp->next;
            }
        }
        return head;
    }
};