class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> result(nums.size(),1);
        int left = 1, right = 1;
        for (int i = 0; i < nums.size(); i++) {
            result[i] = left;
            left*=nums[i];
        }
        for(int j = nums.size()-1;j>=0;j--){
            result[j]*=right;
            right*=nums[j];
        }
        return result;
    }
};