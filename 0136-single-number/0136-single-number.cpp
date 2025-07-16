class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int result = 0;
        for(int i=0;i<nums.size();i++){
            result^=nums[i];
        }
        return result;
        
        //why does xor work
        //acc to xor properties
        // 0 ^ 2 ^ 1 ^ 2 ^ 3 ^ 1
        // 0 ^ (2 ^ 2) ^ (1 ^ 1) ^ 3    ← Commutative & Associative
        // 0 ^ 0 ^ 0 ^ 3                ← Same numbers = 0
        // 3                            ← Number with 0 = itself
    }
};