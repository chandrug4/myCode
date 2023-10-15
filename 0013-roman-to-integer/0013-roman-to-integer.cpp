class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,int>mp;
        mp['I']=1;
        mp['V']=5;
        mp['X']=10;
        mp['L']=50;
        mp['C']=100;
        mp['D']=500;
        mp['M']=1000;
        int ans=0;
        for(int i=0;i<s.size();)
        {
            /*if(i==s.size()-1) 
            {
            ans+=mp[s[i]];
            break;
            }*/
            if(mp[s[i]]<mp[s[i+1]])
            {
                ans-=mp[s[i]];
                ans+=mp[s[i+1]];
                i+=2;
            }
            else
            {
                ans+=mp[s[i]];
                i++;
            }
        }
        return ans;
    }
};