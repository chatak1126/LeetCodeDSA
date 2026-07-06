class Solution {
public:
    bool isIsomorphic(string s, string t) {
        
        if(s.size()!=t.size()) return false;

        int map_S[256] = {0};
        int map_T[256] = {0};

        for(int i=0; i<s.size(); i++){
            int el_S = s[i];
            int el_T = t[i];

            if(map_S[el_S]!=0 && map_S[el_S]!=el_T) return false;
            if(map_T[el_T]!=0 && map_T[el_T]!=el_S) return false;

            map_S[el_S] = el_T;
            map_T[el_T] = el_S;
        }
        return true;
    }
};