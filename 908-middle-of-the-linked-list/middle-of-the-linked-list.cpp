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
    ListNode* middleNode(ListNode* head) 
    {
        ListNode *temp,*prev;
        temp = head;
        int count=0;;
        while(temp!=NULL)
        {
            count++;
            temp=temp->next;
        }
        int mid=0;
        if(count%2==0)
        {
            mid=(count/2)+1;
        }
        else
        {
            mid=(count+1)/2;
        }
        temp = head;
        count = 0;
        while(temp!=NULL)
        {
            count++;
            if(count==mid)
            {
                head = temp;
                break;
            }
            prev=temp;
            temp=temp->next;
        }
        return head;
    }
};