class Solution
{
    public:
    int countTime(string time)
    {
        int arr[] = {1, 1, 1, 1};
        if(time[0]=='?' && time[1]=='?')
        {
            //just to return 24
            arr[0] = 2;
            arr[1] = 12;
        }
        else if(time[0]=='?')
        {
            if(time[1]-48 <= 3)
                arr[0] = 3;
            else
                arr[0] = 2;
        }
        else if(time[1]=='?')
        {
            if(time[0]-48 == 2)
                arr[1] = 4;
            else
                arr[1] = 10;
        }
        if(time[3]=='?')
            arr[2] = 6;
        if(time[4]=='?')
            arr[3] = 10;
        return arr[0]*arr[1]*arr[2]*arr[3];
    }
};