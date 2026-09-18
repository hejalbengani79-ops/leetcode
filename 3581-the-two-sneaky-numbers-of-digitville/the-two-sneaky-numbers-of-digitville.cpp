class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) 
    {
        int hash[100]={0};
        int n = nums.size();
        vector<int> vec(2);
        int j=0;
        for(int i=0; i<n; i++)
        {
            hash[nums[i]]++;
        }
        for(int i=0; i<n-2; i++)
        {
            if(hash[i]==2)
            {
                vec[j]=i;
                j++;
            }
        }
        return vec;
    }
};