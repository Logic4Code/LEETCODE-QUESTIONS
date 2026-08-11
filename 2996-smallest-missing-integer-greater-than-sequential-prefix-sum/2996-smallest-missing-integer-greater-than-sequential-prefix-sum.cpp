class Solution {
public:
    int missingInteger(vector<int>& nums) {
        if(nums.size()==1) return nums[0]+1;
        int c=0,s=nums[0];
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1]+1){
                s+=nums[i];
            }
            else{
              break;
            }
        }
        sort(nums.begin(),nums.end());
         for(int i=0;i<nums.size();i++){
            if(nums[i]==s+1){
                s=nums[i];
            }
        }
         for(int i=0;i<nums.size();i++){
            if(nums[i]==s){
                s++;
            }
        }
        return s;  
    }
};