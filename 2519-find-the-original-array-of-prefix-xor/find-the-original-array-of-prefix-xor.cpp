class Solution {
public:
    vector<int> findArray(vector<int>& pref) 
    {
        int n = pref.size();
        vector<int> vec(n);
        int temp=pref[0];
        vec[0]=pref[0];
        if(n==1)
        {
            return pref;
        }
        for(int i=1; i<n; i++)
        {
            if(i==1)
            {
                vec[i]=pref[0]^pref[1];
                continue;
            }
            temp = temp^vec[i-1];
            vec[i] = temp^pref[i];
        }
        return vec;
    }
};