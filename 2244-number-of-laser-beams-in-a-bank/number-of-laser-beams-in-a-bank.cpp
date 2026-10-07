class Solution {
public:
    int numberOfBeams(vector<string>& bank) 
    {
        int n = bank.size();
        int m = bank[0].length();
        int sum = 0;
        vector<int> count;
        int c=0;
        for(int i=0; i<n; i++)
        {
            c=0;
            for(int j=0; j<m; j++)
            {
                if(bank[i][j]=='1')
                {
                    c++;
                }
            }
            if(c>0)
            {
                count.push_back(c);
            }
        }
        int a = count.size();
        for(int i=0; i<a-1; i++)
        {
            sum = sum + (count[i]*count[i+1]);
        }
        return sum;
    }
};