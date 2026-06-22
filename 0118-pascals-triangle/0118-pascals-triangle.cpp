vector<int> generateROW(int rownum){
    vector<int> ls;
    int temp=1;
    for(int i=0; i<rownum; i++){
        if(i==0){
            ls.push_back(1);
        }
        else{
            temp = temp*(rownum-i)/i;
            ls.push_back(temp);
        }
    }
    return ls;
}
class Solution {
public:
    vector<vector<int>> generate(int numRows) {

        vector<vector<int>> ans;
        for(int i=1; i<=numRows; i++){
            ans.push_back(generateROW(i));
        }
        return ans;  
    }
};