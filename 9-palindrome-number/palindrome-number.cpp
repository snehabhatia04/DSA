class Solution {
public:
    bool isPalindrome(int x) {
        int rev = 0;
        int dup = x;
        while(x > 0){
            int lastd = x % 10;
            if (rev > INT_MAX / 10) return false;
            rev = (rev*10)+lastd;
            x = x/10;
        }
        return rev == dup;
    }
};