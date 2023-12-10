class Solution {
public:
    int totalMoney(int n) {
        int fullWeek=n/7;
        int rem=n%7,money=0,i;
        for(i=0;i<fullWeek;i++)
        {
            //N(a+l)/2 ;
            // formula to find sum of a to l, N is no. of terms
            money+=(7*(i+1+(i+7))/2);
        }
        //to add remaining money
        //using 'i' as i have the last value where the loop stops;
        money+=(rem*(i+1+(i+rem))/2);
        return money;
    }
};