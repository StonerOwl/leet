class Solution {
public:
    bool isPalindrome(int x) {
        int ans =0,rem;
        if(x<0){
            return false;
        }
        int real = x;
        while(x!=0){
           
            rem = x%10;
             if (ans > INT_MAX/10 || (ans == INT_MAX/10 && rem > 7)){
             return 0;
             }
            x/=10;
            ans = ans*10 + rem;
        }
        if(real == ans){
            return true;
        }
        else{
            return false;
        }

    }
};