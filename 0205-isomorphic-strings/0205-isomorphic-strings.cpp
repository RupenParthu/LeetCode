class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if (s.length() != t.length()) return false;

        unordered_map<char, char> st; // s -> t
        unordered_map<char, char> ts; // t -> s

        for (int i = 0; i < s.length(); i++) {
            
            // Forward mapping s -> t
            if (st.count(s[i])) {
                if (st[s[i]] != t[i]) return false;
            } else {
                st[s[i]] = t[i];
            }

            // Reverse mapping t -> s
            if (ts.count(t[i])) {
                if (ts[t[i]] != s[i]) return false;
            } else {
                ts[t[i]] = s[i];
            }
        }

        return true;
    }
};
