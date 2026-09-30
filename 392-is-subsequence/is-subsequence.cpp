class Solution {
public:
    bool isSubsequence(string s, string t) {
        int x = 0;
        int y = 0;

        while(y < t.size()) {
            if(x < s.size() && s[x] == t[y]) {
                x++;
            }

            y++;
        }

        return x == s.size();
    }
};