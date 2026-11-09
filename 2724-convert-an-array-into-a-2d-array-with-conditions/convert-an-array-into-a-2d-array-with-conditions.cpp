class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) 
    {
        int n = nums.size();
        int hash[201]={0};
        for(int i=0; i<n; i++)
        {
            hash[nums[i]]++;
        }
        int max = hash[nums[0]];
        for(int i=0; i<n; i++)
        {
            if(max<hash[nums[i]])
            {
                max = hash[nums[i]];
            }
        }
        vector<vector<int>> vec(max);
        for(int i=0; i<max; i++)
        {
            for(int j=0; j<201; j++)
            {
                if(hash[j]>0)
                {
                    vec[i].push_back(j);
                    hash[j]--;
                }
            }
        }
        return vec;
    }
};