class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        // Here the question is using constant extra space but i have used O(n) SC since i learned about hashmap functions and used it here
        // Once i solve this problem with given constraints i will update the code 
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
