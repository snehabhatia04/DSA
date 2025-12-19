class Solution {
public:
    int minwt(vector<int>& weights){
        int n=weights.size();
        int mini=0;
        for(int i=0; i<n; i++){
            mini=max(mini, weights[i]);
        }
        return mini;
    }
    int maxwt(vector<int>& weights){
        int n=weights.size();
        int maxi=0;
        for(int i=0; i<n; i++){
            maxi+=weights[i];
        }
        return maxi;
    }
    int findDays(vector<int>& weights, int cap){
        int days=1, load=0;
        for(int i=0; i<weights.size(); i++){
            if(weights[i]+load>cap){
                days+=1;
                load=weights[i];
            }
            else{
                load+=weights[i];
            }
        }
        return days;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int n=weights.size();
        int low=minwt(weights), high=maxwt(weights);
        while(low<=high){
            int mid=(low+high)/2;
            int noOfDays=findDays(weights, mid);
            if(noOfDays<=days){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return low;
    }
};