class Solution {
public:
    bool isPowerOfFour(int n) {
        int a = 1;
          while(a <= INT_MAX / 4 && a < n){
a= a*4;
               }

        if(a==n){
            return true;
        }
        else{
            return false;
        }
    }
};