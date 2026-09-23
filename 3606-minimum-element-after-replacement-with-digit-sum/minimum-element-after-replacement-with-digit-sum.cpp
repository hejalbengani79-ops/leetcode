class Solution {
public:
    int minElement(vector<int>& nums) 
    {
        int n = nums.size();
        vector<int> vec(n);
        int sum, digit, rem;
        for(int i=0; i<n; i++)
        {
            if(nums[i]==10000)
            {
                vec[i]=1;
            }
            else if(nums[i]>=1000)
            {
                sum=0;
                rem = nums[i];
                digit = rem%10;
                sum = sum + digit;
                rem = (int)rem/10;
                digit = rem%10;
                sum = sum + digit;
                rem = (int)rem/10;
                digit = rem%10;
                sum = sum + digit;
                rem = (int)rem/10;
                digit = rem%10;
                sum = sum + digit;
                vec[i]=sum;
            }
            else if(nums[i]>=100)
            {
                sum=0;
                rem = nums[i];
                digit = nums[i]%10;
                sum = sum + digit;
                rem = (int)rem/10;
                digit = rem%10;
                sum = sum + digit;
                rem = (int)rem/10;
                digit = rem%10;
                sum = sum + digit;
                vec[i]=sum;
            }
            else if(nums[i]>=10)
            {
                sum=0;
                rem = nums[i];
                digit = nums[i]%10;
                sum = sum + digit;
                rem = (int)rem/10;
                digit = rem%10;
                sum = sum + digit;
                vec[i]=sum;
            }
            else if(nums[i]>=1)
            {
                vec[i]=nums[i];
            }
        }
        int min=vec[0];
        for(int i=0; i<n; i++)
        {
            if(vec[i]<min)
            {
                min = vec[i];
            }
        }

        return min;
    }
};