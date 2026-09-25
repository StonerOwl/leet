class Solution {
public:
    int firstUniqChar(string s) {
        int length = s.length();
        unordered_map<char, int> mp;

        for(int j = 0; j < length; j++) {
            mp[s[j]]++;
        }

        for(int j = 0; j < length; j++) {
            if(mp[s[j]] == 1)
                return j;
        }

        return -1;
    }
};