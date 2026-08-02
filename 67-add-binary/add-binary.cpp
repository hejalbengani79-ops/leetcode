class Solution {
public:
    string addBinary(string a, string b) 
    {
        int n = a.size();
        int m = b.size();
        string c="";
        int carry=0;
        int max = n>m?n:m;
        int min = n<m?n:m;
        for(int i=0; i<max-min; i++)
        {
            if(m==max)
            {
                a.insert(0,1,'0');
            }
            else
            {
                b.insert(0,1,'0');
            }
        }
        for(int i=max-1; i>=0; i--)
            {
                if(a[i]=='1' && b[i]=='1' && carry==0)
                {
                    c.insert(0,1,'0');
                    carry = 1;
                }
                else if(a[i]=='1' && b[i]=='1' && carry==1)
                {
                    c.insert(0,1,'1');
                    carry = 1;
                }
                else if((a[i]=='0' && b[i]=='1' && carry==0) || (a[i]=='1' && b[i]=='0' && carry==0))
                {
                    c.insert(0,1,'1');
                    carry = 0;
                }
                else if((a[i]=='0' && b[i]=='1' && carry==1) || (a[i]=='1' && b[i]=='0' && carry==1))
                {
                    c.insert(0,1,'0');
                    carry = 1;
                }
                else if((a[i]=='0' && b[i]=='0' && carry==0))
                {
                    c.insert(0,1,'0');
                    carry = 0;
                }
                else if((a[i]=='0' && b[i]=='0' && carry==1))
                {
                    c.insert(0,1,'1');
                    carry = 0;
                }
                
            }
            if(carry == 1)
            {
                c.insert(0,1,'1');
                carry = 0;
            }
        
        return c;
    }
};