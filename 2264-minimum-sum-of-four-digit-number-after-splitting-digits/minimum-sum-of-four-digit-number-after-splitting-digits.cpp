class Solution {
public:
    int minimumSum(int num) 
    {
        int a,b,c,d;
        string s;
        int m;
        int nums11, nums12, nums21, nums22;
        s = to_string(num);
        a = (s[0])-'0';
        b = (s[1])-'0';
        c = (s[2])-'0';
        d = (s[3])-'0';
        if(a<=b && a<=c && a<=d)
        {
            if(b<=c && b<=d)
            {
                nums11 = a*10+c;
                nums12 = a*10+d;
                nums21 = b*10+d;
                nums22 = b*10+c;
                m = min((nums11+nums21),(nums12+nums22));
            }
            else if(c<=b && c<=d)
            {
                nums11 = a*10+b;
                nums12 = a*10+d;
                nums21 = c*10+d;
                nums22 = c*10+b;
                m = min((nums11+nums21),(nums12+nums22));
            }
            else if(d<=c && d<=b)
            {
                nums11 = a*10+c;
                nums12 = a*10+b;
                nums21 = d*10+b;
                nums22 = d*10+c;
                m = min((nums11+nums21),(nums12+nums22));
            }
        }
        else if(b<=a && b<=c && b<=d)
        {
            if(a<=c && a<=d)
            {
                nums11 = a*10+c;
                nums12 = a*10+d;
                nums21 = b*10+d;
                nums22 = b*10+c;
                m = min((nums11+nums21),(nums12+nums22));
            }
            else if(c<=a && c<=d)
            {
                nums11 = b*10+a;
                nums12 = b*10+d;
                nums21 = c*10+d;
                nums22 = c*10+a;
                m = min((nums11+nums21),(nums12+nums22));
            }
            else if(d<=c && d<=a)
            {
                nums11 = b*10+c;
                nums12 = b*10+a;
                nums21 = d*10+a;
                nums22 = d*10+c;
                m = min((nums11+nums21),(nums12+nums22));
            }
        }
        else if(c<=a && c<=b && c<=d)
        {
            if(a<=b && a<=d)
            {
                nums11 = c*10+b;
                nums12 = c*10+d;
                nums21 = a*10+d;
                nums22 = a*10+b;
                m = min((nums11+nums21),(nums12+nums22));
            }
            else if(b<=a && b<=d)
            {
                nums11 = c*10+a;
                nums12 = c*10+d;
                nums21 = b*10+d;
                nums22 = b*10+a;
                m = min((nums11+nums21),(nums12+nums22));
            }
            else if(d<=b && d<=a)
            {
                nums11 = d*10+a;
                nums12 = d*10+b;
                nums21 = c*10+b;
                nums22 = c*10+a;
                m = min((nums11+nums21),(nums12+nums22));
            }
        }
        else if(d<=a && d<=b && d<=c)
        {
            if(a<=b && a<=c)
            {
                nums11 = d*10+b;
                nums12 = d*10+c;
                nums21 = a*10+c;
                nums22 = a*10+b;
                m = min((nums11+nums21),(nums12+nums22));
            }
            else if(b<=c && b<=a)
            {
                nums11 = d*10+a;
                nums12 = d*10+c;
                nums21 = b*10+c;
                nums22 = b*10+a;
                m = min((nums11+nums21),(nums12+nums22));
            }
            else if(c<=b && c<=a)
            {
                nums11 = d*10+a;
                nums12 = d*10+b;
                nums21 = c*10+b;
                nums22 = c*10+a;
                m = min((nums11+nums21),(nums12+nums22));
            }
        }
        return m;
    }
};