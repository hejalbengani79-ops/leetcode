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
    ListNode* partition(ListNode* head, int x) 
    {
        int n = 0;
        ListNode* temp = head;
        while(temp!=NULL)
        {
            n++;
            temp = temp->next;
        }
        vector<int> vec(n);
        vector<int> v;
        temp = head;
        for(int i=0; i<n; i++)
        {
            vec[i]=temp->val;
            temp = temp->next;
        }
        for(int i=0; i<n; i++)
        {
            if(vec[i]<x)
            {
                v.push_back(vec[i]);
            }
        }
        for(int i=0; i<n; i++)
        {
            if(vec[i]>=x)
            {
                v.push_back(vec[i]);
            }
        }
        temp = head;
        for(int i=0; i<n; i++)
        {
            temp->val = v[i];
            temp = temp->next;
        }
        return head;
    }
};