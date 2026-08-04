class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) 
    {
        int n=nums.size();
        int hash[100001]={0};
        int j=0;
        vector<int> ans;
        for(int i=0; i<n; i++)
        {
            hash[nums[i]]++;
        }
        for(int i=0; i<n; i++)
        {
            if(hash[i+1]==0)
            {
                ans.push_back(i+1);
            }
        }
        return ans;
    }
};