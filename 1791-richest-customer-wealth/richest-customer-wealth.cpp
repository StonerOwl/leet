class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {

        int largest = 0;
        int i, j;

        for(i = 0; i < accounts.size(); i++) {

            int sum = 0;

            for(j = 0; j < accounts[i].size(); j++) {
                sum += accounts[i][j];
            }

            if(sum > largest) {
                largest = sum;
            }
        }

        return largest;
    }
};