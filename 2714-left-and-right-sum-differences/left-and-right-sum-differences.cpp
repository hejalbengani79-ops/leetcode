class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) 
    {
        int n = nums.size();
        vector<int> right(n);
        vector<int> left(n);
        vector<int> vec(n);
        left[0]=0;
        right[n-1]=0;
        for(int i=0; i<n; i++)
        {
            if(i>0)
            {
                for(int j=i-1; j>=0; j--)
                {
                    left[i] = left[i] + nums[j];
                }
            }
            if(i<n-1)
            {
                for(int j=i+1; j<n; j++)
                {
                    right[i] = right[i] + nums[j];
                }
            }
            vec[i]=(abs(left[i]-right[i]));
        }
        return vec;
    }
};