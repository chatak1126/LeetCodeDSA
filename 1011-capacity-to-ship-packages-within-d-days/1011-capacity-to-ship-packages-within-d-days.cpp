int req_Days(vector<int>& weights, int capacity){
    int days=1, load=0;

    for(auto i:weights){
        if(load+i > capacity){
            days+=1;
            load = i;
        }
        else{
            load+=i;
        }
    }
    return days;
}
class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        
        int low = *max_element(weights.begin(), weights.end());
        int high = accumulate(weights.begin(), weights.end(), 0);

        while(low<=high){
            int mid = (low+high)/2;

            if(req_Days(weights, mid) <= days){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return low;
    }
};