class Solution {
public:
    int search(vector<int>& nums, int target) 
    {
        int n = nums.size();
        int mid, l=0, h=n-1;
        while(l<=h)
        {
            mid = (int)((l+h)/2);
            if(nums[mid]==target)
            {
                return mid;
            }
            if(nums[mid]>target)
            {
                h=mid-1;
            }
            if(nums[mid]<target)
            {
                l=mid+1;
            }
        }
        return -1;    
    }
};