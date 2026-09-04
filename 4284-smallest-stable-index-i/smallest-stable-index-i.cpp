class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) 
    {
        int n = nums.size();
        int Min,Max;
        int score;
        for(int i=0; i<n; i++)
        {
            Min=nums[n-1];
            Max=0;
            for(int j=0; j<=i; j++)
            {
                if(nums[j]>Max)
                {
                    Max = nums[j];
                }
            }
            for(int j=i; j<n; j++)
            {
                if(nums[j]<Min)
                {
                    Min = nums[j];
                }
            }
            score = Max-Min;
            if(score<=k)
            {
                return i;
            }
        }
        return -1;
    }
};