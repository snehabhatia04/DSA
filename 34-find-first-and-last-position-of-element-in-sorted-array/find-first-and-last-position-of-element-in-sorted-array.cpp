class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        // int n=nums.size();
        // int lb=lower_bound(nums.begin(), nums.end(), target)-nums.begin();
        // int ub=upper_bound(nums.begin(), nums.end(), target)-nums.begin();
        // if(lb==n || nums[lb]!=target) return {-1, -1};
        // return {lb, ub-1};
        int first =-1, last=-1;
        int n=nums.size();
        for(int i=0; i<=n-1; i++){
            if(nums[i]==target){
                if(first==-1) first=i;
                last=i;
            }
        }
        return {first, last};
    }
};