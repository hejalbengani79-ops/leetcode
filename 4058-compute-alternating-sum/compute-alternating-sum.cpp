class Solution {
public:
    int alternatingSum(vector<int>& nums) 
    {
        int n = nums.size();
        int sum =0;
        int diff =0;
        for(int i=0; i<n; i++)
        {
            if(i%2==0)
            {
                sum = sum + nums[i];
            }
            else
            {
                diff = diff + nums[i];
            }
        }
        return (sum-diff);
    }
};