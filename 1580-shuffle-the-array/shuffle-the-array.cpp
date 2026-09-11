class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> ans(nums.size());
        int i= 0;
        int j = n;
        int k= 0;
        while(k < n){
            ans[i]=nums[k];
            ans[i+1]= nums[j];
            i+=2;
            j++;
            k++;
        }
        return ans;
    }
};