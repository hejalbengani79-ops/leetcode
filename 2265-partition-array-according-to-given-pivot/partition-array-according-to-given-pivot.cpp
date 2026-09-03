class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) 
    {
        int n=nums.size();
        int pos;
        for(int i=0; i<n; i++)
        {
            if(nums[i]==pivot)
            {
                pos=i;
                break;
            }
        }
        vector<int> small;
        vector<int> large;
        vector<int> equal;
        vector<int> result;
        for(int i=0; i<n; i++)
        {
            if(nums[i]==pivot)
            {
                equal.push_back(nums[i]);
            }
            else if(nums[i]>pivot)
            {
                large.push_back(nums[i]);
            }
            else if(nums[i]<pivot)
            {
                small.push_back(nums[i]);
            }
        }
        result.insert(result.end(), small.begin(), small.end());
        result.insert(result.end(), equal.begin(), equal.end());
        result.insert(result.end(), large.begin(), large.end());
        return result;
    }
};