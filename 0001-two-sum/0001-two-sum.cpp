class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
         unordered_set<int> s;
        vector<int> res;
        for(int i=0;i<nums.size();i++){
            int x =target-nums[i];
            if(s.find(x)!=s.end())
            {  auto w=find(nums.begin(), nums.end(), x);
                int t=w-nums.begin();
                res.push_back(t);
                res.push_back(i);
                
            }
            
            s.insert(nums[i]);
            
            
            
            
            
            
            
        }
      
      return res;
    }
};