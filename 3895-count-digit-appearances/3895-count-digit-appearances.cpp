class Solution {
    int d(int a,int y){
        int z=0;
        while(a>0){
          int digit =a%10;
          if(digit==y) z++;
          a=a/10;
        }
        return z;
    }
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {
        int c=0;
        for(int x: nums){
            c+=d(x,digit);
        }
        return c;
    }
};