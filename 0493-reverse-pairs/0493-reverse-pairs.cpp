int cnt=0;
void count(vector<int>& nums, int low, int mid, int high){
    int j=mid+1;
    for(int i=low; i<=mid; i++){
        while(j<=high && nums[i] > 2LL*nums[j]){
            j++;
        }
        cnt+=j-(mid+1);
    }
}
void mergeSort(vector<int>& nums, int low, int mid, int high){
    int i=low;
    int j=mid+1;
    vector<int> temp;

    while(i<=mid && j<=high){
        if(nums[i]<=nums[j]){
            temp.push_back(nums[i]);
            i++;
        }
        else{
            temp.push_back(nums[j]);
            j++;
        }
    }
    while(i<=mid){
        temp.push_back(nums[i]);
        i++;
    }
    while(j<=high){
        temp.push_back(nums[j]);
        j++;
    }

    for(int i=low; i<=high; i++){
        nums[i]=temp[i-low];
    }
}
void mergeArr(vector<int>& nums, int low, int high){
    if(low>=high) return;

    int mid=(low+high)/2;
    mergeArr(nums, low, mid);
    mergeArr(nums, mid+1, high);
    count(nums, low, mid, high);
    mergeSort(nums, low, mid, high);
}
class Solution {
public:
    int reversePairs(vector<int>& nums) { 
        cnt=0;
        int n=nums.size();

        mergeArr(nums, 0, n-1);
        return cnt;
    }
};