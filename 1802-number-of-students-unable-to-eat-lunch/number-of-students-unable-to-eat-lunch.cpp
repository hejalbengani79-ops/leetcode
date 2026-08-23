class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) 
    {
        int i=0,j=0;
        int count;
        while(true)
        {
            if(students.empty())
            {
                return 0;
            }
            int n = sandwiches.size();
            count=0;
            for(int k=0; k<n; k++)
            {
                if(sandwiches[j]==students[k])
                {
                    count++;
                    break;
                }
            }
            if(count==0)
            {
                return n;
            }
            else
            {
                if(sandwiches[j]==students[i])
                {
                    sandwiches.erase(sandwiches.begin());
                    students.erase(students.begin());
                }
                else
                {
                    int var = students[i];
                    students.erase(students.begin());
                    students.push_back(var);
                }
            }
        }
        return 3;
    }
};