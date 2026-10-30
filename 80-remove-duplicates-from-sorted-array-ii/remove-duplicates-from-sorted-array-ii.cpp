class Solution {
public:
    int removeDuplicates(vector<int>& nums) 
    {
        int hash[20001]={0};
        int n = nums.size();
        for(int i=0; i<n; i++)
        {
            hash[nums[i] + 10000]++;
        }
        int temp;
        int count=0;
        for(int i=0; i<n; i++)
        {
            if(hash[nums[i] + 10000]<=2)
            {
                count = count+1;
            }
            else if(hash[nums[i] + 10000]>2)
            {
                count = count+2;
                i=i+hash[nums[i] + 10000]-1;
            }
        }
        for(int i=0; i<n; i++)
        {
            if(hash[nums[i] + 10000]>2)
            {
                temp = hash[nums[i] + 10000]-2;
                for(int j=0; j<temp; j++)
                {
                    int x = nums[i];
                    nums.erase(nums.begin()+i);
                    nums.push_back(x);
                    hash[x + 10000]--;
                }
            }
        }
        return count;
    }
};