class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) 
    {
        int n = groupSizes.size();
        int count=0;
        int hash[501]={0};
        for(int i=0; i<n; i++)
        {
            hash[groupSizes[i]]++;
        }
        for(int i=0; i<n; i++)
        {
            if(hash[groupSizes[i]]>0)
            {
                count = count + hash[groupSizes[i]]/groupSizes[i];
                hash[groupSizes[i]]=0;
            }
        }

        for(int i=0; i<n; i++)
        {
            hash[groupSizes[i]]++;
        }

        vector<vector<int>> vec(count);
        int c=0;
        int i=0;
        while(i<n)
        {
            if(groupSizes[i]==0)
            {
                i++;
                continue;
            }
            if(groupSizes[i]==1)
            {
                vec[c].push_back(i);
                groupSizes[i] = 0;
                c++;
                i++;
                continue;
            }
            else
            {
                vec[c].push_back(i);
            }
            int size = groupSizes[i];
            
            for(int j=i+1; j<n; j++)
            {
                if(groupSizes[j]==groupSizes[i] && vec[c].size()<size)
                {
                    vec[c].push_back(j);
                    groupSizes[j]=0;
                }
                else if(groupSizes[j]==groupSizes[i] && vec[c].size()==size)
                {
                    c++;
                    if(c < count)
                        vec[c].push_back(j);
                    groupSizes[j]=0;
                }
            }
            if(vec[c].size() == size)
                c++;
            i++;
        }
        return vec;
    }
};