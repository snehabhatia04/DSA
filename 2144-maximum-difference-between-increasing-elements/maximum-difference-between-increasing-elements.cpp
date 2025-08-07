class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int mini=nums[0], diff=-1;
        int n=nums.size();
        for(int i=1; i<n; i++){
            if(nums[i]> mini){
                int diff1 = nums[i] - mini;
                diff = max(diff, diff1);
            }
            else{
                mini = nums[i];
            }
        }
        return diff;
    }
};