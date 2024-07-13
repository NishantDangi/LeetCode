class Solution {
public:
    int reverse(int x) {
        bool flag = x<0 ? true : false;
        string s = to_string(x);
        std::reverse(s.begin(), s.end());
        long y = stol(s);
        if(y<-2147483648 || y>2147483647)
            return 0;
        return (int)(flag ? -y : y);
    }
};