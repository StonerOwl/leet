class Solution {
public:
    bool isPowerOfTwo(int n) {
        long long a=1,answer;
        while(a <= INT_MAX / 2 && a < n){
a= a*2;
               }

        if(a==n){
            return true;
        }
        else{
            return false;
        }
    }
};