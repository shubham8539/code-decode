class Solution {
public:
   
    int countPrimes(int n) {
        
        int count=0;
        vector<bool> isp(n+1,true);
        isp[0]=isp[1]=false;
        for(int i=2;i<n;i++){
            if(isp[i]){
                count++;
                for(int j=2*i;j<n;j=j+i){
                    isp[j]=0;
                }
            }
        }
        return count;
        
        
    }
};