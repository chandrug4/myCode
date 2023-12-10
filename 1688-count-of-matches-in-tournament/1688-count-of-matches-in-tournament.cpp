class Solution {
public:
    int numberOfMatches(int n) {
        return n-1;
        /*int noMatch=0;
        while(n>1)
        {
            if(n&1)
            {
                n=(n-1)/2;
                noMatch+=n+1;
            }
            else{
                n/=2;
                noMatch+=n;
            }
        }
        return noMatch;*/
    }
};