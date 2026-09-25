class Solution {
public:
    string convertDateToBinary(string date) 
    {
        int no1,quo1,rem1;
        stack<int> st1;
        int no2,quo2,rem2;
        stack<int> st2;
        int no3,quo3,rem3;
        stack<int> st3;
        string s1="",s2="",s3="",str="";
        no1 = ((date[0]-'0')*1000)+((date[1]-'0')*100)+((date[2]-'0')*10)+(date[3]-'0');
        quo1 = no1;
        while(quo1!=1)
        {
            rem1 = quo1%2;
            st1.push(rem1);
            quo1 = quo1/2;
        }
        st1.push(1);
        while(!st1.empty())
        {
            s1 = s1 + to_string(st1.top());
            st1.pop();
        }

        no2 = ((date[5]-'0')*10)+(date[6]-'0');
        quo2 = no2;
        while(quo2!=1)
        {
            rem2 = quo2%2;
            st2.push(rem2);
            quo2 = quo2/2;
        }
        st2.push(1);
        while(!st2.empty())
        {
            s2 = s2 + to_string(st2.top());
            st2.pop();
        }

        no3 = ((date[8]-'0')*10)+(date[9]-'0');
        quo3 = no3;
        while(quo3!=1)
        {
            rem3 = quo3%2;
            st3.push(rem3);
            quo3 = quo3/2;
        }
        st3.push(1);
        while(!st3.empty())
        {
            s3 = s3 + to_string(st3.top());
            st3.pop();
        }
        str = s1+"-"+s2+"-"+s3;
        return str;
    }
};