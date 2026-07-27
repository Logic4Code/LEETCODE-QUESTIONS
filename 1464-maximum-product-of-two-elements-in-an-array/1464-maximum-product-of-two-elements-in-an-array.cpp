class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int m1=0;
        int m2=0;
        for(int x:nums){
            if(x>=m1){
                int t=m1;
                m1=x;
                m2=t;
            }
            else if(x>=m2) m2=x;
        }
        return (m1-1)*(m2-1);

    }
};