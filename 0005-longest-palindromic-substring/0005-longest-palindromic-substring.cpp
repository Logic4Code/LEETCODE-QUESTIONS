class Solution {
    bool pa(int i,int j,string &s){
        if (i > j) return false;
        while(i<=j){
            if(s[i]!=s[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
public:
    string longestPalindrome(string s) {
        string ans="";
        int a=0,b=0,c=0;
        for(int i=0;i<s.size();i++){
            for(int j=i;j<s.size();j++){
                if(pa(i,j,s)){
                    if(j-i+1>c){
                        c=j-i+1;
                        a=min(i,j);
                        b=max(i,j);
                    }
                }
            }
        }
        for(int i=a;i<=b;i++){
            ans+=s[i];
        }
        return ans;
    }
};