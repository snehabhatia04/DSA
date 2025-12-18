class Solution {
public:
    int findmax(vector<int>& nums){
        int maxi=INT_MIN;
        int n=nums.size();
        for(int i=0; i<n; i++){
            maxi=max(maxi, nums[i]);
        }
        return maxi;
    }
    long long totalsum(vector<int>& nums, int k){
        long long total=0;
        int n=nums.size();
        for(int i=0; i<n; i++){
            total+=ceil((double)nums[i]/(double)k);
        }
        return total;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low=1, high=findmax(nums);
        while(low<=high){
            int mid=(low+high)/2;
            long long total=totalsum(nums, mid);
            if(total<=threshold){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return low;
    }
};