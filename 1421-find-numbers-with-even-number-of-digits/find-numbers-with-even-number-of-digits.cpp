class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count = 0;
        int i;
        int dig = 0;
        for(i = 0;i<nums.size();i++){
          while (nums[i] > 0) {
            nums[i] /= 10;
             dig++;
}
            if( dig % 2 == 0){
            count += 1;}
            dig = 0;
        }
        return count;
    }
};