class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        // kadane's algo
        int total = nums[0];
        int prev = nums[0];
        for(int i=1;i<nums.size();i++){
            total = max(nums[i],total + nums[i]);
            prev = max(total,prev);
        } 
        return prev;
    }
};