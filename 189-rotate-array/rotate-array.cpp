#include<algorithm>
using namespace std;
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        auto a=nums.begin();
        auto b=nums.end();
        k%=n;
        reverse(a, a+n-k);
        reverse(a+n-k, b);
        reverse(a,b);
    }
};