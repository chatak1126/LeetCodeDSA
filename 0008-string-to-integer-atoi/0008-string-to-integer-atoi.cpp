#include<bits/stdc++.h>
 class Solution {
public:
    int myAtoi(string s) {

        int i=0, n = s.size();

        while(i<n && s[i]==' ') i++;

        int sign=1;
        if(i < n && (s[i]=='+') || (s[i]=='-')){
            sign = (s[i] == '-') ? -1 : 1;
            i++;
        }

        long int number = 0;
        while(isdigit(s[i])){
            number = number*10 + (s[i] - '0');

            if(number*sign >= INT_MAX) return INT_MAX;
            if(number*sign <= INT_MIN) return INT_MIN;
            i++;
        }
        return (int)number*sign;
    }
};
