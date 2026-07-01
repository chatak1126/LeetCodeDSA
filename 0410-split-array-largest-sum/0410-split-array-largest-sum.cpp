int count_subarr(vector<int>& nums, int maxsum){
    int subarrs = 1;
    int sum = 0;

    for(auto i:nums){
        if(sum + i <= maxsum){
            sum +=i;
        }
        else{
            subarrs +=1;
            sum = i;
        }
    }
    return subarrs;
}
class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
        int low = *max_element(nums.begin(), nums.end());
        int high = accumulate(nums.begin(), nums.end(), 0);

        while(low<=high){
            int mid = (low+high)/2;

            if(count_subarr(nums, mid) <= k) high = mid-1;
            else low = mid+1;
        }
        return low;
    }
};