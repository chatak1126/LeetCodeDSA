class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        vector<int> ans;
        // no of rows
        int n = mat.size(); 
        // no of column
        int m = mat[0].size();

        int low = 0;
        int high = m-1;

        while(low<=high){
            int mid = (low+high)/2;

            int row = 0;
            for(int i=0; i<n; i++){
                if(mat[i][mid] > mat[row][mid]){
                    row=i;
                }
            }
            // checking for to go right or left
            bool left = (mid-1>=0) && (mat[row][mid-1] > mat[row][mid]);
            bool right = (mid+1<m) && (mat[row][mid+1] > mat[row][mid]);

            if(!left && !right){
                ans = {row, mid};
                return ans;
            }
            else if(left){
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return {-1,-1};
    }
};