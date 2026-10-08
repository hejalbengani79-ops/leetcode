class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) 
    {
        int n = nums.size();
        vector<int> vec(n);
        int temp;
        for(int i=0; i<n; i++)
        {
            vec[i]=-1;
        }
        for(int i=0; i<n; i++)
        {
            if(vec[index[i]]==-1)
            {
                vec[index[i]] = nums[i];
            }
            else
            {
                temp = vec[index[i]];
                vec[index[i]]=nums[i];
                for(int j=index[i]+1; j<n; j++)
                {
                    swap(temp,vec[j]);
                }
            }
        }
        return vec;
    }
};