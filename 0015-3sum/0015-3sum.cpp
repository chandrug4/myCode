class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        set<vector<int>>ss;
        vector<vector<int>> ans;
        for(int i=0;i<n;i++)
        {
            int comp=nums[i],first=i+1;
            int last=n-1;
            while(first<last)
            {
                int sum=comp+nums[first]+nums[last];
                if(sum==0)
                {
                    vector<int>good={comp,nums[first],nums[last]};
                    ss.insert(good);
                    first++;
                    last--;
                }
                else if(sum>0)
                {
                    last--;
                }
                else
                {
                    first++;
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