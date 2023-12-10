class Solution {
public:
    int removeAlmostEqualCharacters(string word) {
        int sub=0,n=word.size(),oper=0;
        if(n==1) return 0;
        for(int i=0;i<n;i++)
        {
            if(word[i]-1==word[i+1] || word[i+1]==word[i]+1 || word[i]==word[i+1])
            {
                word[i+1]='2';
                sub++;
            }
        }
        return sub;
    }
};