class Solution {
public:
    bool isMiddleElementUnique(vector<int>& nums) 
    {
        int n = nums.size();
        int mid = nums[(n-1)/2];
        int count=0;
        for(int i=0; i<n; i++)
        {
            if(i!=((n-1)/2))
            {
                if(nums[i]==mid)
                {
                    count++;
                }
            }
            
        }
        if(count==0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};