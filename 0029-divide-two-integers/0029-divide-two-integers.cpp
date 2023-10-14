class Solution {
public:
    int divide(int dividend,int divisor) {
        /*unsigned int divCount=0;
        bool isPosi;
        if(dividend==divisor) return 1;

        isPosi= dividend<0 == divisor<0;
         
        unsigned int a=abs(dividend);
        unsigned int b=abs(divisor);
        while(a>=b)
        {
            a-=b;
            divCount++;
        }
        return isPosi?divCount:-divCount;
        */
        if(dividend == divisor)
            return 1;
        bool isPositive = (dividend<0 == divisor<0);
        unsigned int a = abs(dividend);
        unsigned int b = abs(divisor);
        unsigned int ans = 0;
        while(a>=b)
        {
            short q=0;
            while(a > (b<<(q+1)))
            {
                q++;
            }
            ans+=(1<<q);
            a-=(b<<q);
        }
        if(ans== (1<<31) and isPositive)
        {
            return INT_MAX;
        }
        return isPositive?ans:-ans;
    }
};
