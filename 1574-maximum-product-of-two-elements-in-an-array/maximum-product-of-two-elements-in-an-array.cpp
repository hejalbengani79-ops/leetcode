class Solution {
public:
    int maxProduct(vector<int>& nums) 
    {
        int n = nums.size();
        int max = nums[0];
        int p=0;
        for(int i=0; i<n; i++)
        {
            if(max<nums[i])
            {
                max = nums[i];
                p=i;
            }
        }
        int temp = max;
        nums.erase(nums.begin() + p);
        max = nums[0];
        for(int i=0; i<n-1; i++)
        {
            if(max<nums[i])
            {
                max = nums[i];
            }
        }
        return ((max-1)*(temp-1));
    }
};