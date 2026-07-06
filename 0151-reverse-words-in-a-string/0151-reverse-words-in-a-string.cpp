class Solution {
public:
    string reverseWords(string s) {
       string word = "";
       stack<string> st;

       string result = "";

       for(int i=0; i<s.size(); i++){

        if( s[i]==' '){
            if(word.size()>0){
                st.push(word);
                word = "";
            }
            continue;
        }
        word += s[i];
       }
       
       if (!word.empty()) {
            st.push(word);
        }

        while (!st.empty()) {
            result += st.top();
            st.pop();
            if (!st.empty()) result += " ";
        }

       return result;

    } 
};
