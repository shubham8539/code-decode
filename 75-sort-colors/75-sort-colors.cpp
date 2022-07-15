class Solution {
public:
    void sortColors(vector<int>& nums) {
        
        int i=0;
        int j=0;
        int h=nums.size()-1;
        while(j<=h)
        {
            
            if(nums[j]==0)
            {
                swap(nums[j],nums[i]);
                i++;
                j++;
            }
            else if(nums[j]==1)
            {
                j++;
            }
            else
            {
            swap(nums[j],nums[h]);
                h--;
            }
            
            
            
        }
       
        
        
        
        
        
    }
};