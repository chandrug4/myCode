class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max=0,tempmax=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==1){
                tempmax++;
            }
            else{
                if(tempmax>max){
                max=tempmax;
                }
                tempmax=0;
            }
        }
        if(tempmax>max){
                max=tempmax;
                }
        return max;
    }
};