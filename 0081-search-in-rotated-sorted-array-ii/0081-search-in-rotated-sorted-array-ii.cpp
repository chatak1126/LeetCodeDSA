class Solution {
public:
    bool search(vector<int>& nums, int x) {
        int n= nums.size();
        int low=0;
        int high=n-1;

        while(low<=high){
            int mid=(low+high)/2;

            if(nums[mid]==x) return true;
            // shrink the search space if all pointed elemwnts are same until one of them become different 
            if(nums[low]==nums[mid] && nums[mid]==nums[high]){
                low++;
                high--;
                continue;
            }
            // assuming left part of mid is sorted
            if(nums[low]<=nums[mid]){
                if(nums[low]<=x && x<=nums[mid]){
                    high=mid-1;
                }
                else{
                    low=mid+1;
                }
            }
            // assuming right part of mid is sorted
            else{
                if(nums[mid]<=x && x<=nums[high]){
                    low=mid+1;
                }
                else{
                    high=mid-1;
                }
            }
        }
        return false;
    }
};