class Solution {
public:
    int numberOfSubstrings(string s) {
         int count = 0;
        int l = 0;
        vector<int> cha(3, 0);
        int n = s.length();
        
        for (int i = 0; i < n; i++) {
            cha[s[i] - 'a']++;
            
            while (cha[0] > 0 && cha[1] > 0 && cha[2] > 0) {
                count += n - i;
                cha[s[l] - 'a']--;
                l++;
            }
        }
        
        return count;
    }
};