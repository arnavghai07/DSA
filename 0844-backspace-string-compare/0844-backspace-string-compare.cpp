class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<int> s1, s2;

        for(char c : s){
            if(c == '#'){
                if(!s1.empty()) s1.pop();
            }
            else{
                s1.push(c);
            }
        }
        for(char d : t){
            if(d == '#'){
                if(!s2.empty()) s2.pop();
            }
            else{
                s2.push(d);
            }
        }
        if(s1 == s2){
            return true;
        }
        else{
            return false;
        }

    }
};