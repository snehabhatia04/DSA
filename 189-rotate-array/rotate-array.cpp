#include<algorithm>
using namespace std;
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        // int n=nums.size();
        // k%=n;
        // int temp[k];
        // for(int i=0; i<k; i++){
        //     temp[i]=nums[(n-k)+i];
        // }
        // for(int i=n-1; i>=k; i--){
        //     nums[i]=nums[i-k];
        // }
        // for(int i=0; i<k; i++){
        //     nums[i]=temp[i];
        // }
        int n=nums.size();
        auto a=nums.begin();
        auto b=nums.end();
        k%=n;
        reverse(a, a+n-k);
        reverse(a+n-k, b);
        reverse(a,b);
    }
};