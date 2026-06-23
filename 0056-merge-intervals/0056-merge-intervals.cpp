class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        int n=nums.size();

        for(int i=0; i<n; i++){
            if(i==0 || nums[i][0]>ans.back()[1]){
                ans.push_back(nums[i]);
            }
            else if( nums[i][0]<=ans.back()[1]){
                ans.back()[1]= max(ans.back()[1], nums[i][1]);
            }
        }
        return ans;
    }
};