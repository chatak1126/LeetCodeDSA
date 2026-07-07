class Solution {
public:
    string longestCommonPrefix(vector<string>& str) {
        int size = str.size();
        sort(str.begin(), str.end());

        string result = "";

        for(int i=0; i<str[0].size(); i++){

            if(str[0][i] != str[size-1][i]){
                break;
            }
            result += str[0][i];
        }
        return result;
    }
};