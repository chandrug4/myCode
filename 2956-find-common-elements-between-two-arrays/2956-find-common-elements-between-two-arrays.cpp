class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size(),m=nums2.size();
        int index=0,found=0,count=0;
        vector<int> ans;
        unordered_map<int,int> mp1;
        unordered_map<int,int> mp2;
        for(int i=0;i<n;i++)
        {
            mp1[nums1[i]]++;
        }
        for(int i=0;i<m;i++)
        {
            mp2[nums2[i]]++;
        }
        for(auto it:mp1)
        {
            //cout<<mp2[it.first]<<" "<<it.second<<endl;
            if(mp2[it.first]>0)
            {
                count+=it.second;
            }
        }
        ans.push_back(count);
        count=0;
        for(auto it:mp2)
        {
            //cout<<mp1[it.first]<<" "<<it.second<<endl;
            if(mp1[it.first]>0)
            {
                count+=it.second;
            }
        }
        ans.push_back(count);
        return ans;
    }
};