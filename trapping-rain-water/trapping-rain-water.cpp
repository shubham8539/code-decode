class Solution {
public:
    int trap(vector<int>& arr) {
         int res=0;
        int n=arr.size();
        int lmax[n],rmax[n];
        lmax[0]=arr[0];
        for(int i=1;i<n;i++)
        {
            lmax[i]=max(arr[i],lmax[i-1]);
            
        }
        rmax[n-1]=arr[n-1];
        for(int j=n-2;j>=0;j--)
        {
            rmax[j]=max(arr[j],rmax[j+1]);
            
        }
        for(int i=1;i<n-1;i++)
        {
            res=res+(min(lmax[i],rmax[i])-arr[i]);
        }
        
        return res;
             
    }
};