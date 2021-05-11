class Solution {
public:
    
    int countbit(int x){
        int count=0;
            
                
                while(x>0)
                {
                    x=x&(x-1);
                    count++;
                }
        
        return count;
        
    }
    vector<int> countBits(int num) {
        vector<int> arr;
        arr.push_back(0);
        for(int i=1;i<num+1;i++)
        {    
                
                arr.push_back(countbit(i));
                
                
            
            
            
            
            
        }
        return arr;
    }
};