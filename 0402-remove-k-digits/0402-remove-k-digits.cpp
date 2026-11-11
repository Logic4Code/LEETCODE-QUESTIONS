class Solution {
public:
    string removeKdigits(string num, int k) {
        if(k>=num.size()) return "0";
        string ans="";
        stack<char> s;
        for(int i=0;i<num.size();i++){
        if(k==0){
         while(i<num.size()) {
            ans+=num[i];
             i++;
             }
            break;
          }
            if(s.empty()) {
                s.push(num[i]);
                ans+=num[i];
            }
            else{
               if(s.top() > num[i] && k != 0) {
                    s.pop();
                    ans.pop_back(); 
                    k--;
                    i--;         
                }
                else{
                    s.push(num[i]);
                    ans+=num[i];
                }
            }
        }
        while(k > 0 && !ans.empty()){
            ans.pop_back();
            k--;
        }
        int idx = 0;
        while(idx < ans.size() && ans[idx] == '0') {
            idx++;
        }
        ans = ans.substr(idx);

        return ans.empty() ? "0" : ans;
    }
};