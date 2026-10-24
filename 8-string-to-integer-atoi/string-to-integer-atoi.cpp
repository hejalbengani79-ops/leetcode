class Solution {
public:
    int myAtoi(string s) 
    {
        long long num=0;
        int n = s.length();
        if(n==0)
        {
            return 0;
        }
        
        if(s[0]=='0')
        {
            for(int j=0; j<n; j++)
            {
                if(s[j]=='+' || s[j]=='-')
                {
                    return 0;
                }
                else if(s[j]=='0')
                {
                    continue;
                }
                else
                {
                    break;
                }
            }
        }
        if(s[0]=='0')
        {
            for(int j=0; j<n; j++)
            {
                if(s[j]==' ')
                return 0;
            }
        }

        if(s[0]=='0' || s[0]==' ')
        {
            if(!s.empty()){
            while(s[0]=='0' || s[0]==' ')
            {
                s.erase(0, 1);
            }
            }
        }
        string sn="";
        if(!s.empty()){
        n = s.length();
        if(s[0]=='-' || s[0]=='+' || ((int)s[0]>=49 && (int)s[0]<=57))
        {
            int i = 0;
            if(s[0]=='+')
            {
                s.erase(0, 1);
            }
            else if(s[0]=='-')
            {
                i++;
                sn = sn + '-';
            }
            n=s.length();
            for(;i<n; i++)
            {
                if((int)s[i]>=48 && (int)s[i]<=57)
                {
                    sn = sn + s[i];
                }
                else
                {
                    break;
                }
            }
        }
        else
        {
            return 0;
        }
        }
        else
        {
            return 0;
        }
        n = sn.length();
        if(sn.empty())
        {
            return 0;
        }
        if(s[0]=='-')
        {
            for(int i=1; i<n; i++)
            {
                num = num*10 + ((int)sn[i]-48);
                if(num >= 2147483648)
                {
                    num = -2147483648;
                    return num;
                }
            }
            num = 0-num;
        }
        else
        {
            for(int i=0; i<n; i++)
            {
                num = num*10 + ((int)sn[i]-48);
                
                if(num > 2147483647)
                {
                    num = 2147483647;
                    return num;
                }
            }
        }
        
        return num;
    }
};