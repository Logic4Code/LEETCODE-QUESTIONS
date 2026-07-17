class Solution {
public:
    bool isPerfectSquare(int num) {
        if(num==0||num==1) return true;
        long long l=2;
        long long r=num;
        while(l<=r){
            long long m=l+(r-l)/2;
            long long sq=m*m;
            if(sq==num) return true;
            else if(sq>num) r=m-1;
            else l=m+1;
        }
     return false;
    }
};