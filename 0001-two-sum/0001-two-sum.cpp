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

        /*unordered_map<int,int>mp;

        for(int i=0;i<nums.size();i++)
        {
            int t=target - nums[i];
            if(mp.find(t)!=mp.end()) 
            {
                return {i,mp[t]};
            }
            mp[nums[i]]=i;
        }
        return {};*/
        int size=nums.size();
        vector<pair<int,int>>ans;
        for(int i=0;i<size;i++)
        {
            ans.push_back({nums[i],i});
        }
        sort(ans.begin(),ans.end());
        int low=0,high=size-1;
        while(low<high)
        {
            int sum = ans[low].first + ans[high].first;
            if(sum==target) 
            {
                return {ans[low].second,ans[high].second};
            }
            else if(sum>target)
            {
                high--;
            }
            else
            {
                low++;
            }
        }
        return {};
    }
};