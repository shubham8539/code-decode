class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
        
        int j=nums.size();
        sort(nums.begin(),nums.end());
        
        for(int i=0;i<j-1;i++){
            
            if(nums[i]==nums[i+1]){
                return true;
            }
        }
        return false;
    }
};