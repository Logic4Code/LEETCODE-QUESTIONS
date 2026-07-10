class Solution {
    bool isPalindrome(const string& s, int l, int h) {
        while (l < h) {
            if (s[l] != s[h]) {
                return false;
            }
            l++;
            h--;
        }
        return true;
    }

    void solve(const string& s, int i, vector<string>& temp, vector<vector<string>>& ans) {
        if (i == s.length()) {
            ans.push_back(temp);
            return;
        }
        for (int end = i; end < s.length(); end++) {
            if (isPalindrome(s, i, end)) {
                string substring = s.substr(i, end - i + 1);
                temp.push_back(substring);
                solve(s, end + 1, temp, ans);
                temp.pop_back();
            }
        }
    }
public:
    vector<vector<string>> partition(string s) {
       vector<vector<string>> ans;
        vector<string> temp;
        solve(s, 0, temp, ans);
        return ans; 
    }
};