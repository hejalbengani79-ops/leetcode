class Solution {
public:
    bool isValid(string s) 
    {
        int n = s.size();
        stack<char> ch;
        if(s[0]==')')
        {
            return false;
        }
        if(s[0]=='}')
        {
            return false;
        }
        if(s[0]==']')
        {
            return false;
        }
        if(n%2!=0)
        {
            return false;
        }
        for(int i=0; i<n; i++)
        {
            if(s[i]=='(')
            {
                ch.push('(');
            }
            if(s[i]=='{')
            {
                ch.push('{');
            }
            if(s[i]=='[')
            {
                ch.push('[');
            }
            //adding done
            if(s[i] == ')' && (ch.empty() || ch.top() != '('))
            {
                return false;
            }
            if(s[i]==')' && ch.top()=='(')
            {
                ch.pop();
            }
            if(s[i] == '}' && (ch.empty() || ch.top() != '{'))
            {
                return false;
            }
            if(s[i]=='}' && ch.top()=='{')
            {
                ch.pop();
            }
            if(s[i] == ']' && (ch.empty() || ch.top() != '['))
            {
                return false;
            }
            if(s[i]==']' && ch.top()=='[')
            {
                ch.pop();
            }
        }
        if(ch.empty())
        {
            return true;
        }
        return false;
    }
};