class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> mp,mp1;
        vector<int> ans;
        for(int i:nums1){
            mp[i]++;
        }
        for(int i:nums2){
            mp1[i]++;
        }
        for(auto it:mp){
            
            if(mp1[it.first]>0){
            ans.push_back(it.first);
            }
        }
        return ans;
    }
};