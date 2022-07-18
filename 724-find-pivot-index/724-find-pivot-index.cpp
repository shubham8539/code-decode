class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        
        int sum=0;
        int lefts=0;
        for(int i=0;i<nums.size();i++)
{
            sum=sum+nums[i];
        }
        for(int i=0;i<nums.size();i++)
        {
            if(lefts==sum-lefts-nums[i])
            {
                return i;
            }
            lefts=lefts+nums[i];
        }
        
        return -1;
    }
};