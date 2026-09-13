class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size()-1;
        int width = right - left;
        int largest = 0;
        int size = 0;
        
      while(right > left) {

    int width = right - left;

    if(height[left] > height[right]) {
        size = height[right] * width;
    }
    else {
        size = height[left] * width;
    }

    if(size > largest) {
        largest = size;
    }

    if(height[left] < height[right]) {
        left++;
    }
    else {
        right--;
    }
}
        return largest;
    }
};