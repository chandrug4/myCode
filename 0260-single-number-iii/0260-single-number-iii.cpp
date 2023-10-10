class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
                unordered_map<int,int> mp;
        int size=nums.size();
        vector<int> ans;
        for(int i=0;i<size;i++)
        {
            mp[nums[i]]++;
        }
        for(auto it:mp)
        {
            if(it.second==1)
            {
                ans.push_back(it.first);
            }
        }
        return ans;
        
    }
};