class Solution {
public:
    bool isPalindrome(int x) {
        unsigned long long rem=0, rev=0;
        unsigned long long temp = x;
        if(x<0){
            return false;
        }
        while(x!=0){
            rem = x%10;
            rev = rev*10 + rem;
            x/=10;
        }
        if(rev==temp){
            return true;
        }else{
            return false;
        }
    }
};