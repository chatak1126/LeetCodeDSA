class Solution {
public:
    bool rotateString(string s, string goal) {
        int size = s.size();

        while(size!=0){
            int temp = s[0];
            for(int i=1; i<s.size(); i++){
                s[i-1] = s[i];
            }
            s[s.size()-1] = temp;

            if (s==goal) return true;
            else{
                size--;
            }
        }
        return false;
    }
};