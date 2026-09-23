class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length())
            return false;

        unordered_map<char, int> mp;

        for(int i = 0; i < s.length(); i++) {
            mp[s[i]]++;
        }

        for(int i = 0; i < t.length(); i++) {
            char c = t[i];

            if(mp.count(c)) {
                mp[c]--;

                if(mp[c] < 0)
                    return false;
            }
            else {
                return false;
            }
        }

        return true;
    }
};