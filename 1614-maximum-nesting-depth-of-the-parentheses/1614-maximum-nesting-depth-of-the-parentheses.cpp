class Solution {
public:
    int maxDepth(string s) {
        int ans=0,x=0;
       for(char c : s){
        if(c=='(') x++;
        else if(c==')') x--;
        else continue;
        ans=max(ans,x);
       } 
       return ans;
    }
};