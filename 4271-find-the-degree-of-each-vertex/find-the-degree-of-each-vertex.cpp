class Solution {
public:
    vector<int> findDegrees(vector<vector<int>>& matrix) 
    {
        int n = matrix.size();
        vector<int> vec;
        int i,j;
        int sum;
        for(i=0; i<n; i++)
        {
            sum = 0;
            for(j=0; j<n; j++)
            {
                sum = sum + matrix[i][j];
            }
            vec.push_back(sum);
        }
        return vec;
    }
};