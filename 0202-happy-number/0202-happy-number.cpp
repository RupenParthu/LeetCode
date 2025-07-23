class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> map;
        while(n!=1 && !map.count(n)){
            map.insert(n);
            int sum = 0;
            while(n>0){
                sum+= pow(n%10,2);
                n/=10;
            }

            n = sum;  
        }
        return n==1;
    }
};