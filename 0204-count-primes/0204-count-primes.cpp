class Solution {
public:
    int countPrimes(int n) {
        int cnt = 0;
        // using seivem algo for prime counting
        vector<bool> seive(n, true);
        if (n == 0 || n == 1)
            return 0;
        for (int i = 2; i < n; i++) {
            if (seive[i] == true) {
                cnt++;
                for (int j = i + i; j < n; j += i) {
                    seive[j] = false;
                }
            }
        }
        return cnt;
    }
};