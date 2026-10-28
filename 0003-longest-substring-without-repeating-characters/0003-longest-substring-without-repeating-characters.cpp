class Solution {
public:
    int lengthOfLongestSubstring(string s) {
    if(s=="") return 0;
     map<char,int>f;
     int i=0,j=0,ans=0;
    while(1){
    f[s[j]]++;
    while(f[s[j]]>1) {
       f[s[i]]--;
        i++;
    }
    ans=max(ans,j-i+1);
     if(j==s.size()-1) break;
    else j++;
    }
    return ans;
    }
};