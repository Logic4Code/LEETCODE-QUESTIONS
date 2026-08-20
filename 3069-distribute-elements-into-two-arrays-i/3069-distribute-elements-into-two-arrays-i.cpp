class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        int l=nums[0];
        int r=nums[1];
        vector<int> a;
        vector<int>b;
        a.push_back(l);
        b.push_back(r);
        for(int i=2;i<nums.size();i++){
          if(l>r){
            a.push_back(nums[i]);
            l=nums[i];
          }
else{
     b.push_back(nums[i]);
            r=nums[i];   
}
        }
        vector<int>ans;
          ans.insert(ans.end(), a.begin(), a.end());

        ans.insert(ans.end(), b.begin(), b.end());
        return ans;
    }
};