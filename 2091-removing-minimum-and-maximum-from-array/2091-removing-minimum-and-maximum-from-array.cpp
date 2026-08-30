class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        pair<int, int> x = {INT_MAX, -1};
        pair<int, int> y = {INT_MIN, -1};
       for(int i=0;i<nums.size();i++){
        if(nums[i]>y.first){
            y.first=nums[i];
            y.second=i+1;
        }
        if(nums[i]<x.first){
            x.first=nums[i];
            x.second=i+1;
        }       
       }
       int z=max(x.second,y.second);
       int p=min(x.second,y.second)+nums.size()-max(x.second,y.second)+1;
       int q=nums.size()-min(x.second,y.second)+1;
       return min(z,min(p,q));
    }
};