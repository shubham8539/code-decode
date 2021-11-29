class Solution {
public:
    
    int h(int x,int y){
        
        
        if(x==1)
        {
            return 0;
        }
        else
        {
            return ((h(x-1,y)+y)%x);
        }
        
    }
    int findTheWinner(int n, int k) {
        
        return h(n,k)+1;
        
        
    }
};