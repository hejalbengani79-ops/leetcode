class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) 
    {
        int n = grid.size();
        vector<int> vec1(n);
        vector<int> vec2(n);
        int max = 0;

        for(int i=0; i<n; i++)
        {
            max = 0;
            for(int j=0; j<n; j++)
            {
                if(grid[i][j]>max)
                {
                    max = grid[i][j];
                }
            }
            vec1[i]=max;
        }
        for(int i=0; i<n; i++)
        {
            max = 0;
            for(int j=0; j<n; j++)
            {
                if(grid[j][i]>max)
                {
                    max = grid[j][i];
                }
            }
            vec2[i]=max;
        }
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                grid[i][j] = min(vec1[i],vec2[j]) - grid[i][j];
            }
        }
        int sum = 0;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                sum = sum + grid[i][j];
            }
        }
        return sum;
    }
};