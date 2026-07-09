class Solution {
public:
    string reverseWords(string s) {
        string ans = "";
        string temp = "";
        int n = s.length();
        for (int i = n - 1; i >= 0; i--) {
            if (s[i] != ' ') {
                temp.push_back(s[i]);
            } 
            if (s[i] == ' ' || i == 0) {
                if (!temp.empty()) {
                    reverse(temp.begin(), temp.end());
                    if (ans.empty()) {
                        ans += temp; 
                    } else {
                        ans += " " + temp; 
                    }
                    
                    temp = ""; 
                }
            }
        }
        
        return ans;
    }
};