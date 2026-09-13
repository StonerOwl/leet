class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        vector<int> answer(nums.size());

        int mul = 1;

        //Left 
        for(int i = 0; i < nums.size(); i++) {
            answer[i] = mul;
            mul *= nums[i];
        }

        //Right
        mul = 1;

        for(int i = nums.size() - 1; i >= 0; i--) {
            answer[i] *= mul;
            mul *= nums[i];
        }

        return answer;
    }
};