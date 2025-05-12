class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> freq;
        int maxi = 0,numba=0;
        for(int value : nums){
            freq[value]++;
            if(maxi<freq[value]){
                maxi = freq[value];
                numba = value;
            }
        }
         return numba;
        
    }
};