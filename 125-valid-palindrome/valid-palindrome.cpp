class Solution {
public:
    bool palindromeHelper(string &s, int l, int r){
        if(l>=r) return 1==1;
        while (l < r && !isalnum(s[l])) l++;
        while (l < r && !isalnum(s[r])) r--;
        if(tolower(s[l])!=tolower(s[r])) return 0==1;
        return palindromeHelper(s, l+1, r-1);
    }
    bool isPalindrome(string s) {
        return palindromeHelper(s,0,s.size()-1);
    }
};