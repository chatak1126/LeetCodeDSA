class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows = matrix.size();

        for(int i=0; i<rows; i++){

            auto it = lower_bound(matrix[i].begin(), matrix[i].end(), target);

            if(it!=matrix[i].end() && *it==target){
                return true;
            }
        }
        return false;
    }
};