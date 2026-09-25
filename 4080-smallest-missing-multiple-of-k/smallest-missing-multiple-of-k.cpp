class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) 
    {
        int n = nums.size();
        int count=0;
        for(int i=k; i<(25000); i=i+k)
        {
            count=0;
            for(int j=0; j<n; j++)
            {
                if(nums[j]==i)
                {
                    count++;
                    break;
                }
            }
            if(count == 0)
            {
                return i;
            }
        }
        return 0;
    }
};