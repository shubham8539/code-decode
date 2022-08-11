class Solution {
public:
    void soln(vector<int> nums, vector<vector<int>>& res,int i){
        
        if(i>=nums.size()){
            res.push_back(nums);
            return ;
    }
        for(int j=i;j<nums.size();j++){
             swap(nums[i],nums[j]);
            soln(nums,res,i+1);
            swap(nums[i],nums[j]);
            
            
            
            
        }
        
        
        
        
        
        
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>res;
        int i=0;
        soln(nums,res,i);
        return res;
    }
};