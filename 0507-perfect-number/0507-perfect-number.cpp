class Solution {
public:
    bool checkPerfectNumber(int num) {
        int c=1;
        bool ans=false;
        for(int i=2;i<sqrt(num);i++){
            if(num%i==0){
                c+=i;
                c+=num/i;
            }
            if(c>num){
                ans=false;
                break;
            }
            if(c==num) {
                ans=true;
            }
        }
        cout<<c;
        return ans;
    }
};