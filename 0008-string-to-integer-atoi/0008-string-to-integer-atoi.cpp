#include<bits/stdc++.h>
 class Solution {
public:
    int myAtoi(string s) {
        // Your code goes here
        int i=0;
        while(i<s.size() && s[i]==' ') i++;

        string currentnum = "";

        // ignore all white space
        for(i; i<s.size(); i++){

            if(s[i]=='-' && i+1<s.size() && isdigit(s[i+1])){
                if(i==0 || !isdigit(s[i-1])){
                    currentnum += s[i];
                    continue;
                }
                else {
                    break;
                }
            }
            else if (s[i] == '+' && i + 1 < s.size() && isdigit(s[i + 1])) {
                if (i == 0 || !isdigit(s[i - 1])) {
                    // just skip the '+' (don’t append, since stoi handles positive by default)
                    continue;
                } else break;
            }
            else if(isdigit(s[i])){
                currentnum += s[i];
                continue;
            }
            else{
                break;
            }
        }
        if(currentnum.empty() || currentnum == "-") return 0;

        int number=0; 
        try{
            number = stoi(currentnum);
        }catch(out_of_range&){
            number = (currentnum[0]=='-') ? INT_MIN : INT_MAX;
        }

        return number;
    }
};
