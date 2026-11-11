class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int digit) 
    {
        int n = nums.size();
        string s;
        int count = 0;
        for(int i=0; i<n; i++)
        {
            s = to_string(nums[i]);
            for(int j=0; j<s.length(); j++)
            {
                if(s[j]-'0'==digit)
                {
                    count++;
                }
            }
        }
        return count;
    }
};