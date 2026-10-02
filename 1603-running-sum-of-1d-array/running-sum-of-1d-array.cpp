class Solution {
public:
    vector<int> runningSum(vector<int>& nums) 
    {
        int n = nums.size();
        int sum = 0;
        vector<int> vec(n);
        for(int i=0; i<n; i++)
        {
            sum = sum + nums[i];
            vec[i]=sum;
        }
        return vec;
    }
};