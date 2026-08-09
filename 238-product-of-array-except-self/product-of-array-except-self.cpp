class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) 
    {
        int n= nums.size();
        vector<int> vec(n);
        vector<int> pre;
        pre.push_back(1);
        vector<int> suf;
        suf.push_back(1);
        int pro = 1;
        for(int i=0; i<n-1; i++)
        {
            pro = pro*nums[i];
            pre.push_back(pro);
        }
        pro = 1;
        for(int i=1; i<n; i++)
        {
            pro = pro*nums[n-i];
            suf.insert(suf.begin(),pro);
        }
        for(int i=0; i<n; i++)
        {
            vec[i]=pre[i]*suf[i];
        }
        return vec;
    }
};