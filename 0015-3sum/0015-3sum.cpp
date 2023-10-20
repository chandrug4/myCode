class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        set<vector<int>>ss;
        vector<vector<int>> ans;
        for(int i=0;i<n-2;i++)
        {
            int comp=nums[i],first=i+1,last=n-1;
            while(first<last)
            {
                int sum=comp+nums[first]+nums[last];
                if(sum==0)
                {
                    ss.insert({comp,nums[first],nums[last]});
                    first++;
                    last--;
                }
                else if(sum>0)
                {
                    if(nums[last]==nums[last-1]) last-=2;
                    else last--;
                }
                else
                {
                    if(nums[first]==nums[first+1]) first+=2;
                    else first++;
                }
            }
            
        }
        for(auto tri:ss)
        {
            ans.push_back(tri);
        }
        
        return ans;
    }
};