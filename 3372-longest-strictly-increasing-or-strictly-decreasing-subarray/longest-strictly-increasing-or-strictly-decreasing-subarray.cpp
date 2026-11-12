class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) 
    {
        int count=1;
        int tempcount=1;
        int countd=1;
        int tempcountd=1;
        int n = nums.size();
        for(int i=0; i<n-1; i++)
        {
            if(nums[i+1]>nums[i])
            {
                count++;
            }
            else
            {
                if(count>tempcount)
                {
                    tempcount = count;
                }
                count = 1;
            }
        }
        for(int i=0; i<n-1; i++)
        {
            if(nums[i+1]<nums[i])
            {
                countd++;
            }
            else
            {
                if(countd>tempcountd)
                {
                    tempcountd = countd;
                }
                countd = 1;
            }
        }

        return max(max(tempcount,tempcountd),max(count,countd));
    }
};