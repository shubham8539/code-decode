class Solution {
    
private:
    
    void sol(vector<int>& nums,vector<int> out,int i, vector<vector<int>>& res)
    {
        if(i>=nums.size()){
            res.push_back(out);
            return ;
        }
        sol(nums,out,i+1,res);
        int ele=nums[i];
        out.push_back(ele);
        sol(nums,out,i+1,res);
        
        
        
        
        
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> out;
        int i=0;
        sol(nums,out,i,res);
        return res;
        
        
    }
};