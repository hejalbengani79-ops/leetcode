class Solution 
{
public:
    int passwordStrength(string password) 
    {
        int n,count=0;
        n = password.length();
        int hash[125]={0};
        for(int i=0; i<n; i++)
        {
            hash[(int)password[i]]++;
        }
        for(int i=0; i<125; i++)
        {
            if(hash[i]>0)
            {
                if(i>=97 && i<=122)
                {
                    count=count+1;
                }
                if(i>=65 && i<=90)
                {
                    count=count+2;
                }
                if(i>=48 && i<=57)
                {
                    count=count+3;
                }
                if(i==33 || i==64 || i==35 || i==36)
                {
                    count=count+5;
                }
            }
        }
        return count;
    }
};