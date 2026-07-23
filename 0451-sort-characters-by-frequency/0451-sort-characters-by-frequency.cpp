class Solution {
public:
    string frequencySort(string s) {
        
        vector<pair<int, char>> freq(256);

        for(int i=0; i<256; i++){
            freq[i] = {0, (char)i};
        }

        for(auto ch : s){
            freq[(unsigned char)ch].first++;
        }

        sort(freq.begin(), freq.end(), [](auto &a, auto &b){
            return a.first> b.first;
        });

        string ans = "";

        for(int i=0; i<256; i++){
            if(freq[i].first > 0) ans.append(freq[i].first, freq[i].second);
        }

        return ans;
    }
};