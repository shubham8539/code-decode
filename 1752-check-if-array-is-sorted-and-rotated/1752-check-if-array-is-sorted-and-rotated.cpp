class Solution {
public:
    bool check(vector<int>& nums) {
        int n=nums.size();
        int co=0;
        for(int i=1;i<n;i++){
            if(nums[i-1]>nums[i]){
                co++;
            }
        }
        if(nums[n-1]>nums[0])
            co++;
        
     return co<=1;
    }
};