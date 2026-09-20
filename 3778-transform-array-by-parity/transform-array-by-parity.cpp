class Solution {
public:
    vector<int> transformArray(vector<int>& nums) 
    {
        int n = nums.size();
        int count=0;
        vector<int> vec(n);

        for(int i=0; i<n; i++)
        {
            if(nums[i]%2==0)
            {
                vec[i]=0;
                count++;
            }
            else
            {
                vec[i]=1;
            }
        }
        for(int i=0; i<count; i++)
        {
            vec[i]=0;
        }
        for(int i=count; i<n; i++)
        {
            vec[i]=1;
        }
        return vec;
    }
};