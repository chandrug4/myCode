class Solution {
public:
    int mySqrt(int x) {
        int i=1,ans=x,count=0;
        while(i<=ans)
        {
            ans=ans-i;
            count++;
            i+=2;
        }
        return count;
    }
};