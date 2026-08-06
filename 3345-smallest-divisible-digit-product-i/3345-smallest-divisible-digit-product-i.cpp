class Solution {
    int z(int a,int t){
        int n=a,p=1;
        while(n>0){
            int digit=n%10;
            p*=digit;
            n=n/10;
        } 
        if(p%t==0) return a;
        else return z(a+1,t);
    }
public:
    int smallestNumber(int n, int t) {
       return z(n,t);
    }
};