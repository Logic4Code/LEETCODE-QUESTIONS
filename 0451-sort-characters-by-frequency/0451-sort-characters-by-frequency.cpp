class Solution {
public:
    string frequencySort(string s) {
        map<char,int> p;
        for(char c:s)p[c]++;
        string ans="";
        while(!p.empty()){
            char mc=0;
            int mf=0;
            for(auto it : p) {
                if(it.second > mf) {
                    mf = it.second;
                    mc = it.first;
                }
            }
            while(mf--) {
                ans.push_back(mc);
            }
            p.erase(mc);
        }
        return ans;

    }
};