int count_m(vector<int>& nums, int mid, int k){
    int cnt=0, ans=0;

    for(auto i:nums){
        if( i <= mid){
            cnt++;
            if(cnt==k){
                ans++;
                cnt=0;
            }
        }
        else{
            cnt =0;
        }
    }
    return ans;
}
class Solution {
public:
    int minDays(vector<int>& nums, int m, int k) {
        int n =nums.size();
        if( n < (long long)m*(long long)k ) return -1;

        int low = *min_element(nums.begin(),nums.end());
        int high = *max_element(nums.begin(),nums.end());
        int ans =-1;

        while( low <= high ){
            int mid = (low + high)/2;

            if(count_m(nums, mid, k) >= m){
                ans = mid;
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return ans;
    }
};