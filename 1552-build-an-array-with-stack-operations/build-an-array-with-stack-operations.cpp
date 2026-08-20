class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) 
    {
        vector<string> vec;
        int count=0;
        int no = target.size();
        for(int i=1; i<=n; i++)
        {
            if(i==target[count])
            {
                vec.push_back("Push");
                count++;
            }
            else if(i!=target[count])
            {
                vec.push_back("Push");
                vec.push_back("Pop");
            }
            if(count == no)
            {
                break;
            }
        }
        return vec;
    }
};