class Solution {
public:
    int maxDepth(string s) {
        // Your code goes here

        int cnt = 0;
        int maxdepth = 0;

        for(auto ch : s){
            if(ch == '('){
                cnt++;
                maxdepth = max(cnt , maxdepth);
            }
            else if(ch == ')') cnt--;
        }

        return maxdepth;
    }
};