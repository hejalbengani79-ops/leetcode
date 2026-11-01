class Solution {
public:
    int minMoves(vector<int>& nums) 
    {
        int count=0;
        int n = nums.size();
        int sum=0;
        if(n==1)
        {
            return 0;
        }
        if(n==2)
        {
            return abs(nums[1]-nums[0]);
        }
        int min = nums[0];
        for(int i=0; i<n-1; i++)
        {
            if(nums[i]==nums[i+1])
            {
                count++;
            }
        }
        if(count == n-1)
        {
            return 0;
        }
        else
        {
            count=0;
        }
        for(int i=0; i<n; i++)
        {
            if(min>nums[i])
            {
                min = nums[i];
            }
            sum = sum + nums[i];
        }
        
        return (sum - (n*min));
    }
};