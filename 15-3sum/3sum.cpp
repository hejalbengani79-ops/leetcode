class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) 
    {
        vector<vector<int>> vec(0,vector<int>(3));
        vector<vector<int>> vecf(0,vector<int>(3));
        int n = nums.size();
        int count=0;
        for(int i=0; i<n; i++)
        {
            if(nums[i]==0)
            {
                count++;
            }
        }
        if(count == n)
        {
            vecf.push_back({0,0,0});
            return vecf;
        }
        sort(nums.begin(),nums.end());
        if(nums[0]>0)
        {
            return vec;
        }
        int j,k,rem;
        for(int i=0; i<n; i++)
        {
            j = i+1;
            k = n-1;
            while(j<k)
            {
                if(nums[i]+nums[j]+nums[k]==0)
                {
                    vec.push_back({nums[i],nums[j],nums[k]});
                }
                int rem = nums[i]+nums[j]+nums[k];
                if(rem>0)
                {
                    k--;
                }
                else
                {
                    j++;
                }
            }
        }
        sort(vec.begin(),vec.end());
        if(vec.size()==0)
        {
            return vec;
        }
        vecf.push_back(vec[0]);
        for(size_t i=0; i<vec.size()-1; i++)
        {
            if(vec[i]!=vec[i+1])
            {
                vecf.push_back(vec[i+1]);
            }
        }
        return vecf;
    }
};