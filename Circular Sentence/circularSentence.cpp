class Solution
{
    public:
    bool isCircularSentence(string sentence)
    {
        bool flag = true;
        for(int i=0; i<sentence.length(); i++)
        {
            if(sentence[i] == ' ')
            {
                if(sentence[i-1] != sentence[i+1])
                {
                    flag = false;
                    break;
                }
            }
        }
        if(sentence[sentence.length()-1] != sentence[0])
            flag = false;
        return flag;
    }
};