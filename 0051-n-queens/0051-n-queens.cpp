class Solution {
    bool safe(int row,int col,vector<string>&board,int n){
        int x=row;
        int y=col;
        while(y>=0){
            if(board[x][y]=='Q') return false;
            y--;
        }
         x=row;
         y=col;
        while(x>=0 && y>=0){
            if(board[x][y]=='Q') return false;
            y--;
            x--;
        }
         x=row;
         y=col;
        while(x<n && y>=0){
            if(board[x][y]=='Q') return false;
            y--;
            x++;
        } 
        return true;
    }
         void solve(int col,vector<vector<string>>&ans,int n,vector<string>&board){
        if(col==n) {
              ans.push_back(board);
              return;
        }
        for(int row=0;row<n;row++){
            if(safe(row,col,board,n)){
                board[row][col]='Q';
                solve(col+1,ans,n,board);
                board[row][col]='.';
            }
        }
     } 
public:
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
      vector<string> board(n, string(n, '.'));
        solve(0,ans,n,board);
        return ans;
    }
};