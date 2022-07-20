class Solution {
public:
    int mySqrt(int x) 
    {
        int i=0;
        int j=x;
        long long int ans=-1;
        while(i<=j)
        {
            long long int mid=i+(j-i)/2;
            if((mid*mid)==x){
                ans=mid;
            }  
            
            if((mid*mid)>x)
            {
                j=mid-1;
                
                
            }
            else 
            {
                ans=mid;
                i=mid+1;
            }
                     
            
            
            
            
        }
        
        return ans;
        
    }
};