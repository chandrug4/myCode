class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int first=nums[0];
        int n=nums.size();
        for(int i=1;i<n;i++) 
        //for(auto i:nums)
        {
            first=first ^ nums[i];
        }
        return first;




        /*sort(nums.begin(),nums.end());
        int n=nums.size();
        for(int i=1;i<n;i+=2){
            if(nums[i]!=nums[i-1])
            {
                return nums[i-1];
            }
        }
        return nums[n-1];*/

        /*unordered_map<int,int> mp;
        int size=nums.size();
        for(int i=0;i<size;i++)
        {
            mp[nums[i]]++;
        }
        for(auto it:mp)
        {
            if(it.second==1)
            {
                return it.first;
            }
        }
        return -1;
*/
    }
};