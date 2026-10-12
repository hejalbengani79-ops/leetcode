class Solution {
public:
    int minCost(int n) 
    {
        int m;
        vector<int> vec(n+1);
        vec[0]=0;
        vec[1]=0;
        for(int i=2; i<=n; i++)
        { 
            if(i%2==0)
            {
                for(int j=1; j<=i/2; j++)
                {
                    if(j==1)
                    {
                        m = (j*(i-j))+vec[j]+vec[i-j];
                    }
                    else
                    {
                        if((j*(i-j))+vec[j]+vec[i-j]<m)
                        {
                            m = (j*(i-j))+vec[j]+vec[i-j];
                        }
                    }
                }
                vec[i]=m;
            }
            else
            {
                for(int j=1; j<=((i-1)/2); j++)
                {
                    if(j==1)
                    {
                        m = (j*(i-j))+vec[j]+vec[i-j];
                    }
                    else
                    {
                        if((j*(i-j))+vec[j]+vec[i-j]<m)
                        {
                            m = (j*(i-j))+vec[j]+vec[i-j];
                        }
                    }
                }
                vec[i]=m;
            }
        }
        return vec[n];
    }
};