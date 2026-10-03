class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) 
    {
        int n = points.size();
        vector<int> vec(n);

        for(int i=0; i<n; i++)
        {
            vec[i]=points[i][0];
        }

        sort(vec.begin(),vec.end());

        int j = 0;
        int m = 0;
        for(int i=1; i<n; i++)
        {
            if(abs(vec[j]-vec[i])>m)
            {
                m = abs(vec[i]-vec[j]);
            }
            j=i;
        }
        return m;
    }
};