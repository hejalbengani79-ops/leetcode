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
    ListNode* sortList(ListNode* head) 
    {
        vector<int> vec;
        int i =0;
        ListNode* temp;
        temp = head;
        if(head==NULL)
        {
            return head;
        }
        if(head->next == NULL)
        {
            return head;
        }
        while(temp!=NULL)
        {
            vec.push_back(temp->val);
            temp = temp->next;
        }
        for(int i=1; i<vec.size(); i++)
        {
            int j = i-1;
            int t = vec[i];
            while(j>=0 && vec[j]>t)
            {
                vec[j+1]=vec[j];
                j--;
            }
            vec[j+1]=t;
        }
        int k=0;
        temp = head;
        while(temp!=NULL)
        {
            temp->val = vec[k];
            k++;
            temp = temp->next;
        }
        return head;
    }
};