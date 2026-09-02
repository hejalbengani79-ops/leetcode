class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) 
    {
        int m=friends.size();
        int n=order.size();
        vector<int> vec;
        if(n==0)
        {
            return vec;
        }
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if(friends[j]==order[i])
                {
                    vec.push_back(order[i]);
                    break;
                }
            }
        }
        return vec;
    }
};