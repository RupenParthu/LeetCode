class Solution {
public:
    int climbStairs(int n) {
        //1.recursive method exceed time limit

        if(n<=1){
            return 1;
        }

        int a = 1, b = 1;
        int c;

        for(int i = 2; i <= n; i++){
            c = a + b;
            a = b;
            b = c;
        }

        return c;
        
    }
};