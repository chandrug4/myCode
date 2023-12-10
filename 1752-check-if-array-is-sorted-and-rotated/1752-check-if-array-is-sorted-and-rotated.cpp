class Solution {
public:
    bool check(vector<int>& nums) {
        int notInSort=0,n=nums.size();
        for(int i=0;i<n-1;i++)
        {
            if(nums[i]>nums[i+1])
            {
                notInSort++;
            }
        }
        if(nums[n-1]>nums[0])
        notInSort++;
        if(notInSort>1) return false;
        return true;
    }
};