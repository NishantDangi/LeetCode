class Solution
{
public:
    int longestAlternatingSubarray(vector<int>& nums, int threshold)
    {
        int n = nums.size();
        int m=0, ans=0;
        for(int i=0; i<n; i++)
        {
            if(nums[i]%2==0 && nums[i]<=threshold)
            {
                m++;
                ans=max(ans, m);
                if(i<(n-1) && (nums[i+1]%2!=0 && nums[i+1]<=threshold))
                {
                    m++;
                    i++;
                    ans=max(ans, m);
                }
                else
                    m=0;
            }
            else
                m=0;
        }
        return ans;
    }
};