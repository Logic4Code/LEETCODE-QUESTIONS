class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        int maxi=0;
        vector<int> a;
        for(int x:nums){
        maxi=max(maxi,x);
         a.push_back(gcd(x, maxi));
        }
        sort(a.begin(),a.end());
        long long s=0;
        for(int i=0;i<a.size()/2;i++){
            s+=gcd(a[i],a[a.size()-i-1]);
        }
        return s;
    }
};