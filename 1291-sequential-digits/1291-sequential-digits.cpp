class Solution {
public:
    int len(int n){
        int count=0;
        while(n){
            n/=10;
            count++;
        }
        return count;
    }
    string s="123456789";
    vector<int> sequentialDigits(int low, int high) {
         int l1=len(low);
        int l2=len(high);
        vector<int> ans;
        for(int len=l1;len<=l2;len++){
            for(int i=0;i<9-len+1;i++){
                int num=stoi(s.substr(i,len));
                if(num>=low and num<=high) ans.push_back(num);
            }
        }
        return ans;
    }
};