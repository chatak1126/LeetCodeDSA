class Solution {
public:
    string longestPalindrome(string s) {
        // Your code goes here

        int n = s.size();
        if(n==0) return "";

        int anslen = 0;
        int start  = 0;

        // odd 
        for(int i=0; i<n; i++){
            int l = i, r=i;

            while(l>=0 && r<n && s[l]==s[r]){
                if(r-l+1 > anslen){
                    anslen = r-l+1;
                    start = l;
                }
                l--;
                r++;
            }

            l = i;
            r=i+1;

            while(l>=0 && r<n && s[l]==s[r]){
                if(r-l+1 > anslen){
                    anslen = r-l+1;
                    start = l;
                }
                l--;
                r++;
            }
        }
        return s.substr(start, anslen);
    }
};