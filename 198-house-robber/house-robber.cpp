class Solution {
public:
    int rob(vector<int>& nums) 
    {
        int n = nums.size();
        if(n==1)
        {
            return nums[0];
        }
        if(n==2)
        {
            return max(nums[1],nums[0]);
        }
        int count;
        vector<int> vec(n);
        vec[0]=nums[0];
        vec[1]=max(nums[0],nums[1]);
        for(int i=2; i<n; i++)
        {
            vec[i]=max(nums[i]+vec[i-2],vec[i-1]);
        }
        return vec[n-1];
    }
};