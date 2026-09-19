class Solution {
public:
    int gcdOfOddEvenSums(int n) 
    {
        int sume=0;
        int sumo=0;
        int gcd;
        for(int i=1; i<=n; i++)
        {
            sume = sume + 2*(i);
            sumo = sumo + ((2*i)-1);
        }
        int min = (sumo>sume)?sume:sumo;
        for(int i=1; i<=min; i++)
        {
            if(sumo%i==0 && sume%i==0)
            {
                gcd = i;
            }
        }
        return gcd;
    }
};