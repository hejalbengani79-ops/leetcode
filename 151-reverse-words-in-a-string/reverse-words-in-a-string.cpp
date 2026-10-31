class Solution 
{
    public:
    string reverseWords(string s) 
    {
        vector<string> temp(1);
        temp[0]="";
        string sn;
        int n = s.length();
        int j=0;
        for(int i=0; i<n; i++)
        {
            if(s[i]==' ')
            {
                if(temp[j].empty())
                {
                    continue;
                }
                else
                {
                    temp.push_back("");
                    j++;
                }
            }
            else
            {
                temp[j] = temp[j] + s[i];
            }
            
        }   
        for(int i=temp.size()-1; i>=0; i--)
        {
            sn = sn + temp[i] + " ";
        }
        int m = sn.length();
        sn.erase(sn.begin()+(m-1));
        if(sn[0]==' ')
        {
            sn.erase(sn.begin());
        }
        return sn;
    }
};