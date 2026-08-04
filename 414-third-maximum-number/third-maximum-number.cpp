class Solution {
public:
    int thirdMax(vector<int>& nums) 
    {
        int n = nums.size();\
        int j=0;
        int max = nums[0];
        int min = nums[0];
        for(int i=0; i<n; i++)
        {
            if(nums[i]>max)
            {
                max=nums[i];
            }
            if(nums[i]<min)
            {
                min=nums[i];
            }
        }
        int maxi = max;
        for(int i=0; i<n; i++)
        {
            if(nums[i]==max)
            {
                nums[i]=min;
            }
        }
        max = min;
        for(int i=0; i<n; i++)
        {
            if(nums[i]>max)
            {
                max = nums[i];
                j++;
            }
            if(nums[i]<min)
            {
                min = nums[i];
            }
        }
        for(int i=0; i<n; i++)
        {
            if(nums[i]==max)
            {
                nums[i]=min;
            }
        }
        max = min;
        for(int i=0; i<n; i++)
        {
            if(nums[i]>max)
            {
                max = nums[i];
            }
        }
        if(j==0)
        {
            return maxi;
        }
        else
        {
            return max;
        }
    }
};