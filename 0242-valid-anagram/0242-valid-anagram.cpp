class Solution {
public:
    bool isAnagram(string s, string t) {
        //int count=0;
        if(s.size()!=t.size())
        {
            return false;
        }
        /*else
        {
            //eat tea
            for(int i=0;i<s.size();i++)
            {
                for(int j=0;j<s.size();j++)
                {
                    if(s[i]==t[j])
                    {
                        t[j]='0';
                        count++;
                        break;
                    }
                }
            }

        }
        return count==s.size()?true:false;
        */

        unordered_map<char,int> mp1,mp2;
        for(char i:s) mp1[i]++;
        for(char i:t) mp2[i]++;

        for(auto it:mp1)
        {
            if(mp1[it.first]!=mp2[it.first])
            {
                return false;
            }
        }
        return true;
    }
};