class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) 
    {
        int n = cost.size();
        vector<int> vec(n);
        if(n==2)
        {
            return min(cost[1],cost[0]);
        }
        vec[0]=cost[0];
        vec[1]=cost[1];
        for(int i=2; i<n; i++)
        {
            vec[i]=cost[i] + min(vec[i-1],vec[i-2]);
        }
        return min(vec[n-2],vec[n-1]);
    }
};