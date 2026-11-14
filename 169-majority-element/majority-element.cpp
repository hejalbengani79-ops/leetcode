class Solution {
public:
    int majorityElement(vector<int>& nums) 
    {
        int n = nums.size();
        int count=0;
        if(n==1 || n==2)
        {
            return nums[0];
        }
        sort(nums.begin(),nums.end());
        int index=nums[0];
        for(int i=0; i<n; i++)
        {
            if(nums[i]==index)
            {
                count++;
                if(count>n/2)
                {
                    return index;
                }
            }
            else
            {
                count = 1;
                index = nums[i];
            }
        }
        return 8;
    }
};