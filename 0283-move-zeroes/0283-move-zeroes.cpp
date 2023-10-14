class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        /*int j=nums.size()-1;
        int count=0,found=0;
        for(int i:nums)
        {
            if(i==0) count++;
        }
        /*for(int i:nums)
        {
            if(found==count)
            {
                break;
            }
            if(nums[j]==0) 
            {
                j--;
                found++;
                continue;
            }
            if(i==0)
            {
                int swap=nums[j];
                nums[j]=nums[i];
                nums[i]=swap;
                j--;
                count++;
            }
        }
        sort(nums.rbegin(),nums.rend());
        sort(nums.begin(),nums.end()-count);*/

        int nonZero=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=0)
            {
                nums[nonZero]=nums[i];
                nonZero++;
            }
        }
        for(int i=nonZero;i<nums.size();i++)
        {
            nums[i]=0;
        }

    }
};