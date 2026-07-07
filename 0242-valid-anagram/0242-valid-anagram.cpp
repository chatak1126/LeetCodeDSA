class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;

        int mapp[256] = {0};

        for(auto ch:s) mapp[ch]++;
        for(auto ch:t) mapp[ch]--;

        for(int i=0; i<256; i++){
            if(mapp[i]!=0) return false;
        }
        return true;
    }
};