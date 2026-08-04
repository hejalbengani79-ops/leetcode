class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) 
    {
        int n=nums.size();
        int hash[101]={0};
        int i;
        vector<int> ans;
        int max=nums[0];

        for(i=0; i<n; i++)
        {
            if(nums[i]>max)
            {
                max = nums[i];
            }
        }
        for( i=0; i<n; i++)
        {
            hash[nums[i]]++;
        }
        for( i=1; i<=max; i++)
        {
            if(hash[i]==1)
            {
                break;
            }
        }
        for (int j=i; j<=max; j++)
        {
            if(hash[j]==0)
            {
                ans.push_back(j);
            }
        }
        return ans;
    }
};