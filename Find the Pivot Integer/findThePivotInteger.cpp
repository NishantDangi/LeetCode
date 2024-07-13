class Solution
{
    public:
    int pivotInteger(int n)
    {
        int ans = -1;
        for(int i=1; i<=n; i++)
        {
            if(sum(i) == (sum(n)-sum(i-1)))
                ans = i;
        }
        return ans;
    }
    int sum(int m)
    {
        return (m*(m+1))/2;
    }
};