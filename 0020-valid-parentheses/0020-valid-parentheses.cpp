class Solution {
public:
    bool isValid(string s) {
    bool pair = true;
    while (pair) {
        pair = false;
        int l = s.length();
        for ( int i = 0; i < l - 1; ++i) {
            if ((s[i] == '(' && s[i+1] == ')') ||
                (s[i] == '[' && s[i+1] == ']') ||
                (s[i] == '{' && s[i+1] == '}')) {              
                s.erase(i, 2); 
                pair = true;
                break; 
            }
        }
    }
    return s.empty();
    }
};