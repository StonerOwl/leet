class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> mp;
        unordered_set<int> s;

        for(int x : arr) {
            mp[x]++;
        }

        for(auto x : mp) {
            int frequency = x.second;

            if(s.count(frequency))
                return false;

            s.insert(frequency);
        }

        return true;
    }
};