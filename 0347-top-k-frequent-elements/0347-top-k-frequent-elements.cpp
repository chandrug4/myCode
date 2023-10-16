class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        vector<int>ans;
        for(int x:nums){
            mp[x]++;
        }
        int cnt=0,found;
        for(int i=0;i<k;i++)
        {
            cnt=0;
            for(auto it:mp)
            {
                if(it.second>cnt)
                {
                    cnt=it.second;
                    found=it.first;
                }
            }
            ans.push_back(found);
            mp.erase(found);
        }
        return ans;
    }
};