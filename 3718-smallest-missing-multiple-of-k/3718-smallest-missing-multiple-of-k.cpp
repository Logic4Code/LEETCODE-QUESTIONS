class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
    vector<bool> p(101, false);
 for(int x:nums) p[x]=true;
 int s=k;
 while(true){
    if(s > 100||!p[s]) return s;
    s+=k;
 }
 return -1;
    }
};