class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) 
    {
        int n = nums.size();
        vector<int>vec(2*n);
        for(int i=0; i<n; i++)
        {
            vec[i]=nums[i];
        }
        for(int i=0; i<n; i++)
        {
            vec[n+i]=nums[i];
        }
        return vec;
    }
};