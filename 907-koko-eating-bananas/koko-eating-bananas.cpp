class Solution {
public:
    int findmax(vector<int>& piles){
        int maxi=INT_MIN;
        int n=piles.size();
        for(int i=0; i<n; i++){
            maxi=max(maxi, piles[i]);
        }
        return maxi;
    }
    long long totalhours(vector<int>&piles, int hourly){
        long long totalH=0;
        int n=piles.size();
        for(int i=0; i<n; i++){
            totalH += ((long long)piles[i] + hourly - 1) / hourly;
        }
        return totalH;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1, high=findmax(piles);
        while(low<=high){
            int mid=(low+high)/2;
            long long totalH=totalhours(piles, mid);
            if(totalH<=h){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return low;
    }
};