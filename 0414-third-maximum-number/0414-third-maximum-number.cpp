class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int first=INT_MIN,second=INT_MIN,third=INT_MIN,found=0;
        for(int i=0;i<nums.size();i++)
        {
            //if(nums[i]<third) continue;

            if(nums[i]>first)
            {
                third=second;
                second=first;
                first=nums[i];
            }
            else if(nums[i]>second && nums[i]<first)
            {
                third=second;
                second=nums[i];
            }
            else if(nums[i]>third && nums[i]<second)
            {
                third=nums[i];
            }
            if(nums[i]==INT_MIN) found=1;
        }
        //if(third>LLONG_MIN) found=1;
        cout<<third;
        if(nums.size()<3) return first;
        if(found==0 && third==INT_MIN) return first;
        if(second==INT_MIN) return first;
        return third;
    }
};