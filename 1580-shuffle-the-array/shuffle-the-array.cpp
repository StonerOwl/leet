class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> ans(nums.size());
        int i,k= 0;
        int j = n;
        
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