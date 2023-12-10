class Solution {
public:
    void rotate(vector<int>& arr, int k) {
        int n=arr.size();
        k%=n;
        //PRO Method
        reverse(arr.begin(),arr.end()-k);
        reverse(arr.end()-k,arr.end());
        reverse (arr.begin(),arr.end());

        //14-3
        // 1,2,3,4,5,6,7,1,2,3,4,5,6,7

        /*
        // NORMAL METHOD
        
        if(n==1 ||k==0) return;
        int temp[k];//n=7, k=3
        for(int i=n-k;i<n;i++)//4
        {
            temp[i-(n-k)]=arr[i];//5 6 7
        }
        for(int i=n-1;i>=k;i--)//3 4 5 6
        {
            arr[i]=arr[i-k];
        }
        for(int i=0;i<k;i++)
        {
            arr[i]=temp[i];
        }*/

    }
    //1,2,3,1,2,3,4
    //1,2,3,4,5,6,7,d=3
    //5 6 7 1 2 3 4
    /*
        j=0,1,2
        i=d+1=4,5,6
        temp=a[j] // i=4 5 6 
        a[j]=a[i] // j= 0 1 2
        a[d+j]=temp // 3 4 5
        //5 6 7 1 2 3 0
    */
};