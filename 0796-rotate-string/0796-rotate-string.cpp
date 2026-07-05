class Solution {
public:
    bool rotateString(string s, string goal) {

        if(s.size()!=goal.size()) return false;

        string s_doubled = s+s;

        return s_doubled.find(goal) != string::npos;
    }
};