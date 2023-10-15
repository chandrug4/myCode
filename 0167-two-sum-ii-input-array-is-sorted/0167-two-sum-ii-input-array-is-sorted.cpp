class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i=0,j=numbers.size()-1;
        for(int k=0;k<numbers.size();k++)
        {
            int ans=numbers[i]+numbers[j];
            if(ans==target)
            {
                return {i+1,j+1};
            }
            else if(ans>target)
            {
                j--;
            }
            else{
                i++;
            }
        }
        return {};
    }
};