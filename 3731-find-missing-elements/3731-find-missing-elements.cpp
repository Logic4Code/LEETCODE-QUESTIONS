class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int maxi=0;
        int mini= INT_MAX;
        for(int x:nums){
            maxi=max(maxi,x);
            mini=min(mini,x);
        }
        vector<int> ans;
        for(int i=mini+1;i<maxi;i++){
            bool p=true;
            for(int j=0;j<nums.size();j++){
                if(i==nums[j]){
                    p=false;
                    break;
                }
            }
            if(p) ans.push_back(i);
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};