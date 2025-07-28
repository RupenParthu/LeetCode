class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        int n = code.size();
        vector<int> result(n, 0);
        if (k == 0)
            return result;
        for (int i = 0; i < n; i++) {
            if (k > 0) {
                for (int j = 0; j < k; j++) {
                    result[i] += code[(i + j + 1) % n];
                }
            } else {
                for (int j = 0; j < abs(k); j++) {
                    result[i] += code[(i - j - 1 + n) % n];
                }
            }
        }
    return result;
    }
};