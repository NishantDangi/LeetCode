class Solution
{
    public:
    bool isPalindrome(int n)
    {
        string s, str;
        s = to_string(n);
        str = s;
        reverse(str.begin(), str.end());
        if(str == s)
            return true;
        else
            return false;
        return false;
    }
};