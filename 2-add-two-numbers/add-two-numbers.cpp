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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) 
    {
        ListNode *temp1;
        ListNode *temp2,*New;
        New = new ListNode();
        int carry = 0;
        int count1 = 1;
        int count2 = 1;
        temp1 = l1;
        temp2 = l2;
        while(temp1->next!=NULL)
        {
            temp1 = temp1->next;
            count1++;
        }
        while(temp2->next!=NULL)
        {
            temp2 = temp2->next;
            count2++;
        }
        temp1 = l1;
        temp2 = l2;
        if(count1>count2)
        {
            while(temp2!=NULL)
            {
                if(carry == 1)
                {
                    if((temp1->val + temp2->val + carry)>9)
                    {
                        carry = 1;
                    }
                    else
                    {
                        carry = 0;
                    }
                    temp1->val = (temp1->val + temp2->val + 1)%10;
                    temp1 = temp1->next;
                    temp2 = temp2->next;
                }
                else
                {
                    if((temp1->val + temp2->val + carry)>9)
                    {
                        carry = 1;
                    }
                    else
                    {
                        carry = 0;
                    }
                    temp1->val = (temp1->val + temp2->val)%10;
                    temp1 = temp1->next;
                    temp2 = temp2->next;
                }
            }
            while(temp1!=NULL)
            {
                if(carry == 1)
                {
                    if((temp1->val + carry)>9)
                    {
                        carry = 1;
                    }
                    else
                    {
                        carry = 0;
                    }
                    temp1->val = (temp1->val + 1)%10;
                    if(temp1->next == NULL && carry == 1)
                    {
                        New->val = 1;
                        temp1->next = New;
                        New->next = NULL;
                        return l1;
                    }
                    temp1 = temp1->next;
                }
                else
                {
                    if((temp1->val + carry)>9)
                    {
                        carry = 1;
                    }
                    else
                    {
                        carry = 0;
                    }
                    temp1->val = (temp1->val)%10;
                    if(temp1->next == NULL && carry == 1)
                    {
                        New->val = 1;
                        temp1->next = New;
                        New->next = NULL;
                        return l1;
                    }
                    temp1 = temp1->next;
                }
            }
        }
        else if(count1==count2)
        {
            while(temp1!=NULL)
            {
                if(carry == 1)
                {
                    if((temp2->val + temp1->val + carry)>9)
                    {
                        carry = 1;
                    }
                    else
                    {
                        carry = 0;
                    }
                    temp2->val = (temp2->val + temp1->val + 1)%10;
                    if(temp2->next == NULL && carry == 1)
                    {
                        New->val = 1;
                        temp2->next = New;
                        New->next = NULL;
                        return l2;
                    }
                    temp1 = temp1->next;
                    temp2 = temp2->next;
                }
                else
                {
                    if((temp1->val + temp2->val + carry)>9)
                    {
                        carry = 1;
                    }
                    else
                    {
                        carry = 0;
                    }
                    temp2->val = (temp2->val + temp1->val)%10;
                    if(temp2->next == NULL && carry == 1)
                    {
                        New->val = 1;
                        temp2->next = New;
                        New->next = NULL;
                        return l2;
                    }
                    temp1 = temp1->next;
                    temp2 = temp2->next;
                }
            }
            return l2;
        }
        else
        {
            while(temp1!=NULL)
            {
                if(carry == 1)
                {
                    if((temp2->val + temp1->val + carry)>9)
                    {
                        carry = 1;
                    }
                    else
                    {
                        carry = 0;
                    }
                    temp2->val = (temp2->val + temp1->val + 1)%10;
                    temp1 = temp1->next;
                    temp2 = temp2->next;
                }
                else
                {
                    if((temp1->val + temp2->val + carry)>9)
                    {
                        carry = 1;
                    }
                    else
                    {
                        carry = 0;
                    }
                    temp2->val = (temp2->val + temp1->val)%10;
                    temp1 = temp1->next;
                    temp2 = temp2->next;
                }
            }
            while(temp2!=NULL)
            {
                if(carry == 1)
                {
                    if((temp2->val + carry)>9)
                    {
                        carry = 1;
                    }
                    else
                    {
                        carry = 0;
                    }
                    temp2->val = (temp2->val + 1)%10;
                    if(temp2->next == NULL && carry == 1)
                    {
                        New->val = 1;
                        temp2->next = New;
                        New->next = NULL;
                        return l2;
                    }
                    temp2 = temp2->next;
                }
                else
                {
                    if((temp2->val + carry)>9)
                    {
                        carry = 1;
                    }
                    else
                    {
                        carry = 0;
                    }
                    temp2->val = (temp2->val)%10;
                    if(temp2->next == NULL && carry == 1)
                    {
                        New->val = 1;
                        temp2->next = New;
                        New->next = NULL;
                        return l2;
                    }
                    temp2 = temp2->next;
                }
            }
            return l2;
        }
        return l1;
    }
};