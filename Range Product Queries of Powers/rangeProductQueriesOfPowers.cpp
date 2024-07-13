class Solution
{
    public:
    vector<int> productQueries(int n, vector<vector<int>>& queries)
    {
        vector<int> v;
        vector<int> powers;
        string binary = toBinary(n);
        for(int i=binary.length()-1; i>=0; i--)
        {
            int value = 0;
            if(binary[i]=='1')
            {
                value = pow(2, binary.length()-i-1);
                powers.push_back(value);
            }
        }
        for(int i=0; i<queries.size(); i++)
        {
            long long value = 1;
            for(int j=queries[i][0]; j<= queries[i][1]; j++)
            {
                value = ((value%1000000007) * (powers[j]%1000000007))%1000000007;
            }
            v.push_back((int)value);
        }
        return v;
    }
    string toBinary(int n)
    {
        string b = "";
        while(n>0)
        {
            b += to_string(n%2);
            n = n/2;
        }
        reverse(b.begin(), b.end());
        return b;
    }
};