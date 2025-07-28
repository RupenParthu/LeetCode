class Solution {
public:
    string addStrings(string num1, string num2) {
        string result;
        int sum = 0, carry = 0, i = num1.size() - 1, j = num2.size() - 1;
        while (i >= 0 || j >= 0 || carry!=0) {
            int a = (i>=0)?num1[i--] - '0':0;
            int b = (j>=0)?num2[j--] - '0':0;
            sum = a + b + carry;
            carry = sum/10;
            result.push_back((sum%10) + '0');
            
        }
        if(carry!=0){

        result.push_back(carry+'0');
        }
        reverse(result.begin(),result.end());
        return result;
    }
};