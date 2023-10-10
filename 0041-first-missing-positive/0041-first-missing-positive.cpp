class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        unique(nums.begin(),nums.end());
        int j=1;
        for(auto i:nums)
        {
            if(i>0)
            {
                if(i!=j)
                {
                    return j; 
                }
                j++;
            }
        }
        return j;

    }
};