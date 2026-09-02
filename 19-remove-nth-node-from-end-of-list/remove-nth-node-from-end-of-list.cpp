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
    ListNode* removeNthFromEnd(ListNode* head, int n) 
    {
        ListNode* temp;
        ListNode* prev;
        int count=0;
        if(head == NULL)
        {
            return head;
        }
        temp = head;
        while(temp!=NULL)
        {
            temp=temp->next;
            count++;
        }
        int sub=count-n+1;
        count=0;
        temp = head;
        prev = temp;
        if(sub==1)
        {
            head = temp->next;
            delete temp;
            return head;
        }
        while(temp!=NULL)
        {
            count++;
            if(count==sub)
            {
                prev->next=temp->next;
                temp->next=NULL;
                delete temp;
                break;
            }
            prev = temp;
            temp=temp->next;
        }
        return head;
    }
};