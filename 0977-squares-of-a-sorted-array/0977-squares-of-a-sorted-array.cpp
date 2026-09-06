class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int>a;
        int i=0,j=nums.size()-1;
        while(i<=j){
            if(nums[j]*nums[j]>nums[i]*nums[i]){
                a.push_back(nums[j]*nums[j]);
                j--;
            }
            else{
                a.push_back(nums[i]*nums[i]);
                i++;         
            }
        }
     reverse(a.begin(),a.end());
     return a;
    }
};