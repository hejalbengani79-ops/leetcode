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
    ListNode* reverseBetween(ListNode* head, int left, int right) 
    {
        int i = 1;
        ListNode* temp = head;
        ListNode *curr,*last,*prev,*next1,*lastf;
        
        if(left == right)
        {
            return head;
        }
        else if(left == 1)
        {
            curr = head;
            temp = head;
            while(i!=right)
            {
                temp = temp->next;
                i++;
            }
            last = temp;
            lastf = last->next;
            head = last;
            prev = curr;
            while(last!=curr)
            {
                prev = curr;
                while(prev->next!=last)
                {
                    prev = prev->next;
                }
                last->next = prev;
                last = prev;
            }
            last->next = lastf;
        }
        else
        {
            prev = temp;
            while(i!=left)
            {
                prev = temp;
                temp = temp->next;
                i++;
            }
            last = temp;
            curr = temp;
            while(i!=right)
            {
                last = last->next;
                i++;
            }
            lastf = last->next;
            prev->next = last;
            while(last!=curr)
            {
                temp = curr;                       
                while(temp->next!=last)
                {
                    temp = temp->next;
                }
                last->next = temp;
                last = temp;
            }
            last->next = lastf;
            
        }
        return head;
    }
};