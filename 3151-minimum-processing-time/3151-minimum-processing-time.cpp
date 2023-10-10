class Solution {
public:
    int minProcessingTime(vector<int>& processorTime, vector<int>& tasks) {
        sort(processorTime.rbegin(),processorTime.rend());
        
        sort(tasks.begin(),tasks.end());
        int time=0,ans=0;
        for(int i=0;i<processorTime.size();i++)
        {
            //for(int j=i*4;j<(i*4)+4;j++)
            //{ 
                int j=i+1;
                j=j*4;
                j=j-1;
                time=processorTime[i]+tasks[j];
                ans=max(time,ans);
                time=0;
            //}
        }
        return ans;
    }
    
};