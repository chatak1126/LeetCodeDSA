int findindex(vector<int>& nums, int low, int high, int target){
    if(low>high) return -1;

    int mid=(low+high)/2;

    if(nums[mid]==target){
        return mid;
    }
    else if(nums[mid]>target){
        high=mid-1;
        return findindex(nums, low, high, target);
    }
    else{
        low=mid+1;
        return findindex(nums, low, high, target);
    }
}
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int low=0;
        int high=n-1;

        return findindex(nums, low, high, target);

    }
};