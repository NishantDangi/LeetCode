class Solution
{
    public:
    vector<string> twoEditWords(vector<string>& queries, vector<string>& dictionary)
    {
        vector<string> common;
        for(int i=0; i<queries.size(); i++)
        {
            int flag = 0;
            for(int j=0; j<dictionary.size(); j++)
            {
                if(diff(queries[i], dictionary[j]) <=2)
                {
                    flag = 1;
                    break;
                }
            }
            if(flag == 1)
                common.push_back(queries[i]);
        }
        return common;
    }
    int diff(string s1, string s2)
    {
        int d=0;
        for(int i=0; i<s1.length(); i++)
        {
            if(s1[i]!=s2[i])
                d++;
        }
        return d;
    }
};