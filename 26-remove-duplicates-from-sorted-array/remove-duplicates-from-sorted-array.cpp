class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int count = 1;
        int no = nums[0];

        for(int i = 1; i < nums.size(); i++) {
            if(no != nums[i]) {
                nums[count] = nums[i];
                count++;
                no = nums[i];
            }
        }

        return count;
    }
};