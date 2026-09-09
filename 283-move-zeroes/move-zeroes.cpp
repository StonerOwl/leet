class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = 0;
        int k = 0;
        int count= 0;
        for(int i;i<nums.size();i++){
            if(n != nums[i]){
                nums[k] = nums[i];
                k++;
            }
            if(n == nums[i]){
                count ++;
            }
        }
        while(count != 0){
            nums[k]=0;
            k++;
            count --;
        }
       
    }
};