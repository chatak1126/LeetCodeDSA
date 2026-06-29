int sum (vector<int>& nums, int mid){
    int cnt = 0;

    for(auto i : nums){
        cnt += ceil((double)i/mid);
    }
    return cnt;
}
class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low =1;
        int high = *max_element(nums.begin(), nums.end());

        while(low<=high){
            int mid = (low+high)/2;
            int SUM =sum(nums, mid); 

            if(SUM <= threshold){
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return low;
    }
};