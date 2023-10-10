class Solution {
public:
    bool isPalindrome(int x) {
        long long ans=0;
        long long hol=x;
        while(hol>0)
        {

            long long good=hol % 10;
            hol/=10;
            ans*=10;
            ans+=good;
        }
        
        if(ans==x) 
        {
            return true;
        }
        return false;
    }
};