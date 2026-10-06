class Solution {
public:
    int minAddToMakeValid(string s) {
       int ans=0;
       bool p=true;
       while(p){
        p=false;
        int l=s.size();
        for(int i=0;i<l;i++){
            if(s[i]=='('&& s[i+1]==')'){
            s.erase(i, 2);
            p=true;
            break; 
            }
        }
       } 
       return s.size();
    }
};