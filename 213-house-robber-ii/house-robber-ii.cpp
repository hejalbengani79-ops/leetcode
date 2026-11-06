class Solution {
public:
    int rob(vector<int>& nums) 
    {
        int n = nums.size();
        vector<int> vec(n);
        vector<int> vec1(n);
        if(n==1)
        {
            return nums[0];
        }
        if(n==2)
        {
            return max(nums[0],nums[1]);
        }
        //
        vec[0]=nums[0];
        vec[1]=max(nums[0],nums[1]);
        for(int i=2; i<n-1; i++)
        {
            vec[i]=max(nums[i]+vec[i-2],vec[i-1]);
        }
        //
        vec1[1] = nums[1];
        vec1[2] = max(nums[1],nums[2]);
        for(int i=3; i<n; i++)
        {
            vec1[i]=max(nums[i]+vec1[i-2],vec1[i-1]);
        }
        return max(vec[n-2],vec1[n-1]);
    }
};