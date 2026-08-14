class Solution {
public:
    void sortColors(vector<int>& nums) 
    {
        int j=0;
        int n=nums.size();
        int hash[3]={0};
        for(int i=0; i<n; i++)
        {
            hash[nums[i]]++;
        }
        if(hash[1]==0 && hash[0]==0)
        {
            return;
        }
        for(int i=0; i<n; i++)
        {
            if(hash[j]==0)
            {
                j++;
            }
            if(hash[j]==0)
            {
                j++;
            }
            nums[i]=j;
            hash[j]--;
        }
    }
};