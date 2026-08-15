class Solution {
    void par(vector<string> &s,string x,int n,int m){
             if(n==0 && m==0) {
            s.push_back(x);
            return;
        }
        if(m > 0){ par(s, x+")", n, m-1); }
        if(n > 0){ par(s, x+"(", n-1, m+1); }       
    }
public:
    vector<string> generateParenthesis(int n) {
        vector<string> s;
        par(s,"",n,0);
        return s;
    }
};