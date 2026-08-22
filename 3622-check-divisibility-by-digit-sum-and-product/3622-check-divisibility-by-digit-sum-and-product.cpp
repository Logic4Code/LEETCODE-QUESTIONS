class Solution {
public:
    bool checkDivisibility(int n) {
        int k=n,s=0,p=1;
        while(k>0){
            int d=k%10;
            s+=d;
            p*=d;
            k=k/10;
        }
        return n%(s+p)==0;
    }
};