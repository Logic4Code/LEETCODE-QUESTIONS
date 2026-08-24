class Solution {
public:
    vector<string> printVertically(string s) {
      vector<string> ans;
       vector<string> words;
    stringstream ss(s);
    string word;
    int max_len = 0;

    while (ss >> word) {
        words.push_back(word);
        max_len = max(max_len, (int)word.length());
    }
   vector<std::string> result;
    for (int i = 0; i < max_len; ++i) {
       string current_row = "";

        for (const std::string& w : words) {
            if (i < w.length()) {
                current_row += w[i];
            } else {
                current_row += ' ';
            }
        }
        while (!current_row.empty() && current_row.back() == ' ') {
            current_row.pop_back();
        }

        result.push_back(current_row);
    }

    return result;
    }
};