class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
            /*unordered_map<int,int> mp;
            for(int i:nums)
            {
                if(mp[i]>=1) return true;
                mp[i]++;
            }
            */
            /*for(auto it:mp)
            {
                if(it.second>1)
                {
                    return true;
                }
            }
            return false;*/

            /*for(int i=0;i<nums.size();i++)
            {
                for(int j=i+1;j<nums.size();j++)
                {
                    if(nums[i]==nums[j])
                    {
                        return true;
                    }
                }
            }
            return false;*/

            unordered_set<int> seen;
            for(int i:nums)
            {
                if(seen.count(i)>0) return true;
                seen.insert(i);
            }
            return false;
            //return nums.size() > set<int>(nums.begin(),nums.end()).size();
    }
};