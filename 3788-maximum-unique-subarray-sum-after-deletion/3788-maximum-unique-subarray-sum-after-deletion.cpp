class Solution {
public:
    int maxSum(vector<int>& nums) {
        bool allNeg = true;
        unordered_set<int>map;
        int sum = 0;
        int neg = 0;
        int maxNeg = INT_MIN;
        for(int i : nums){
            if(!map.count(i)){
                map.insert(i);
                if(i>0){
                    sum+=i;
                    allNeg=false;
                }else{
                    neg+=0;
                    maxNeg = max(maxNeg,i);
                }
            }
        }
        int result = max(sum,abs(neg));
        if(result!=sum){
           result = neg;
        }
        if(allNeg){
            result = maxNeg;
        }
        return result;
    }
};