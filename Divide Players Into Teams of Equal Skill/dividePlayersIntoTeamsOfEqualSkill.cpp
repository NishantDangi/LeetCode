class Solution
{
    public:
    long long dividePlayers(vector<int>& skill)
    {
        int n = skill.size();
        long long out = 0;
        vector<pair<int, int>> p;
        sort(skill.begin(), skill.end());
        for(int i=0, j=n-1; i<(n/2); i++, j--)
        {
            out += skill[i]*skill[j];
            p.push_back(make_pair(skill[i], skill[j]));
        }
        bool flag = false;
        for(int i=0; i<p.size()-1; i++)
        {
            if((p[i].first+p[i].second) != (p[i+1].first+p[i+1].second))
            {
                flag = true;
                break;
            }
        }
        if(flag)
            return -1;
        return out;
    }
};