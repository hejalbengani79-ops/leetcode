class Solution {
public:
    void reverseString(vector<char>& s) 
    {
        int n = s.size();
        int mid;
        if(n%2==0)
        {
            mid=n/2;
        }
        else
        {
            mid = (n+1)/2;
        }
        for(int i=0; i<mid; i++)
        {
            swap(s[i],s[n-i-1]);
        }
    }
};