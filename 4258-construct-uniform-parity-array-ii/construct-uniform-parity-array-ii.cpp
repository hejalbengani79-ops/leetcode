class Solution {
public:
    bool uniformArray(vector<int>& nums1) 
    {
        int n=nums1.size();
        int min;
        for(int i=0; i<n; i++)
        {
            if(nums1[i]%2==0)
            {
                min=nums1[i];
                break;
            }
        }
        for(int i=0; i<n ;i++)
        {
            if(nums1[i]%2==0)
            {
                if(nums1[i]<min)
                {
                    min=nums1[i];
                }
            }
        }
        int count=0;
        for(int i=0; i<n; i++)
        {
            if(nums1[i]%2==0)
            {
                count++;
            }
        }
        if(count==n || count==0)
        {
            return true;
        }
        for(int i=0; i<n; i++)
        {
            if(nums1[i]<min)
            {
                return true;
            }
        }
        return false;
    }
};