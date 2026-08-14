class Solution {
public:
    int maximumLengthSubstring(string s) {
         unordered_map<int,int>f;
        int ans=0;
        int i=0,j=0;
        while(i<s.size()){
            f[s[i]-'a']++;
            while(f[s[i]-'a']>2){
                f[s[j]-'a']--;
                j++;
            }
            ans=max(ans,i-j+1);
            i++;
        }
        return ans;
    }
};