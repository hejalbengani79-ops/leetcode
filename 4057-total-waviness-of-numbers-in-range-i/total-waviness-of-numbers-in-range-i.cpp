class Solution {
public:
    int totalWaviness(int num1, int num2) 
    {
        int sum = 0;
        int rem;
        for(int i=num1; i<=num2; i++)
        {
            if(i<100)
            {
                sum = 0;
                continue;
            }

            if(i==100000)
            {
                sum = sum + 0; 
            }
            else if(i>9999 && i<100000)
            {
                string s="";
                s = to_string(i);
                for(int j=1; j<4; j++)
                {
                    if(s[j]>s[j+1] && s[j]>s[j-1])
                    {
                        sum++;
                    }
                    else if(s[j]<s[j+1] && s[j]<s[j-1])
                    {
                        sum++;
                    }
                }
            }
            else if(i>999 && i<10000)
            {
                string s="";
                s = to_string(i);
                for(int j=1; j<3; j++)
                {
                    if(s[j]>s[j+1] && s[j]>s[j-1])
                    {
                        sum++;
                    }
                    else if(s[j]<s[j+1] && s[j]<s[j-1])
                    {
                        sum++;
                    }
                }
            }
            else if(i>99 && i<1000)
            {
                string s="";
                s = to_string(i);
                for(int j=1; j<2; j++)
                {
                    if(s[j]>s[j+1] && s[j]>s[j-1])
                    {
                        sum++;
                    }
                    else if(s[j]<s[j+1] && s[j]<s[j-1])
                    {
                        sum++;
                    }
                }
            }
        }
        return sum;
    }
};