class Solution {
public:
    string largestOddNumber(string num) 
    {
        while(num!="")
        {
            int n=num.length();
            if(num[n-1]=='1' || num[n-1]=='3' || num[n-1]=='5' || num[n-1]=='7' || num[n-1]=='9')
            {
                return num;
            }
            num.pop_back();
        }
        return "";
    }
};