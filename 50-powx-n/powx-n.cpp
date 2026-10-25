class Solution {
public:
    double myPow(double x, int n) 
    {
        // double a=1;
        // long long N=n;
        // if(x==0)
        // {
        //     return 0;
        // }
        // if(N>0)
        // {
        //     for(int i=0; i<N; i++)
        //     {
        //         a=a*x;
        //     }
        // }
        // if(N<0)
        // {
        //     N=(0-N);
        //     x=1/x;
        //     for(int i=0; i<N; i++)
        //     {
        //         a=a*x;
        //     }
        // }
        // if(N==0)
        // {
        //     return 1;
        // }
        // return a;
        return pow(x,n);
    }
};