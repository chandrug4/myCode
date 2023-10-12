class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        /*int i,j;
        for(i=0;i<nums.size();i++){
            for(j=i+1;j<nums.size();j++)
        	{
                if(nums[i]+nums[j]==target){
                   // ans.push_back(i);
                   // ans.push_back(j);
                    return {i,j};
                }
            }
        }
        return {};*/

        unordered_map<int,int>mp;

        for(int i=0;i<nums.size();i++)
        {
            int t=target - nums[i];
            if(mp.find(t)!=mp.end()) 
            {
                return {i,mp[t]};
            }
            mp[nums[i]]=i;
        }
        return {};
    }
};