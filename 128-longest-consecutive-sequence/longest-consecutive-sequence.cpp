class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s;

        for(int x : nums) {
            s.insert(x);
        }

        int longest = 0;

        for(int x : s) {
            if(!s.count(x - 1)) {
                int current = x;
                int count = 1;

                while(s.count(current + 1)) {
                    current++;
                    count++;
                }

                longest = max(longest, count);
            }
        }

        return longest;
    }
};