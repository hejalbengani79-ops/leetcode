class Solution {
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) 
    {
        int n = nums.size();
        int m = l.size();
        bool flag = true;
        vector<bool> vec(m);
        int diff=0;
        for(int i=0; i<m; i++)
        {
            diff = 0;
            flag = true;
            vector<int> temp;
            temp = nums;
            sort(temp.begin()+l[i],temp.begin()+(r[i]+1));
            diff = temp[l[i]+1] - temp[l[i]];
            for(int j=l[i]+1; j<r[i]; j++)
            {
                if(temp[j+1]-temp[j]!=diff)
                {
                    vec[i]=false;
                    flag = false;
                    break;
                }
            }
            if(flag == true)
            {
                vec[i]=true;
            }
        }
        return vec;
    }
};