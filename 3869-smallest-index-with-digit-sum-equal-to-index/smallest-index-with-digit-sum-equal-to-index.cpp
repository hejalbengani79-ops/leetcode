class Solution {
public:
    int smallestIndex(vector<int>& nums) 
    {
        int n = nums.size();
        if(nums[0]==0)
        {
            return 0;
        }
        for(int i=0; i<n; i++)
        {
            if(nums[i]==1000)
            {
                if(i==1)
                {
                    return i;
                }
            }
            else if(nums[i]>=100)
            {
                int rem = nums[i];
                int digit;
                int sum = 0;
                for(int i=0; i<3; i++)
                {
                    digit = rem % 10;
                    sum = sum + digit;
                    rem = (int)rem /10;
                }
                if(sum == i)
                {
                    return i;
                }
            }
            else if(nums[i]>=10)
            {
                int rem = nums[i];
                int digit;
                int sum = 0;
                for(int i=0; i<2; i++)
                {
                    digit = rem % 10;
                    sum = sum + digit;
                    rem = (int)rem /10;
                }
                if(sum == i)
                {
                    return i;
                }
            }
            else if(nums[i]>=1)
            {
                int rem = nums[i];
                int digit;
                int sum = 0;
                for(int i=0; i<1; i++)
                {
                    digit = rem % 10;
                    sum = sum + digit;
                    rem = (int)rem /10;
                }
                if(sum == i)
                {
                    return i;
                }
            }
        }
        
        return -1;
    }
};