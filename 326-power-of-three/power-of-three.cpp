class Solution {
public:
    bool isPowerOfThree(int n) {
        int a = 1;
           while(a <= INT_MAX / 3 && a < n){
a= a*3;
               }

        if(a==n){
            return true;
        }
        else{
            return false;
        }
    }
};