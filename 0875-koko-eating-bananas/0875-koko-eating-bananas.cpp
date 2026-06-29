#include<bits/stdc++.h>
long long reqT(vector<int>& nums, int mid){
    long long cnt = 0;
    for(auto i:nums){
        cnt += ceil((double)i/(double)mid);
    }
    return cnt;
}
class Solution {
public:
    int minEatingSpeed(vector<int>& nums, int h) {
        
        int low = 1;
        int high = *max_element(nums.begin(), nums.end());

        while( low<=high ){
            int mid = (low+high)/2;

            long long req_time = reqT(nums, mid);
            if(req_time <= h){
                high = mid-1;
            }
            else{
                low = mid+1;
            }

        }
        return low;
    }
};