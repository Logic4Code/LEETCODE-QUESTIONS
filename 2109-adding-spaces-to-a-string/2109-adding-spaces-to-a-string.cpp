class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        string c="";
        int j=0;
        for(int i=0;i<s.size();i++){
          if(j<spaces.size()&&spaces[j]==i){
            c+=" ";
            j++;
          }
         c+=s[i];
        }
        return c;
    }
};