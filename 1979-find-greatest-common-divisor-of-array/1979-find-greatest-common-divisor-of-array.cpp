class Solution {
public:
    int findGCD(vector<int>& nums) {
        int mini=INT_MAX;
        int maxi=INT_MIN;
        for(int x:nums){
            mini=min(x,mini);
            maxi=max(x,maxi);
        }
        return gcd(mini,maxi);
    }
};