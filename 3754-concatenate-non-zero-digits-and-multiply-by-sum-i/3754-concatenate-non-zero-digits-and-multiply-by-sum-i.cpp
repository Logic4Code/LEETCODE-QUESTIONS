class Solution {
public:
    long long sumAndMultiply(int n) {
        if(n==0) return 0;
        string b=to_string(n);
        string a="";
        int s=0;
        for(char c : b){
         if(c!='0'){
            s+=c-'0';
            a.push_back(c);
         }
        }
        long long x=stoll(a);
        return x*s;
    }
};