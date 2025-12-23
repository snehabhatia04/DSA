class Solution {
public:
    int splitCnt(vector<int>& nums, int value){
        int cnt=1;
        long long valuePerSplit=0;
        for(int i=0; i<nums.size(); i++){
            if(valuePerSplit+nums[i]<=value){
                valuePerSplit+=nums[i];
            }
            else{
                cnt++;
                valuePerSplit=nums[i];
            }
        }
        return cnt;
    }
    int splitArray(vector<int>& nums, int k) {
        int n=nums.size();
        if(k>n) return -1;
        int low=*max_element(nums.begin(), nums.end());
        int high=accumulate(nums.begin(), nums.end(), 0);
        while(low<=high){
            int mid=(low+high)/2;
            int cnt=splitCnt(nums, mid);
            if(cnt>k){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return low;
    }
};