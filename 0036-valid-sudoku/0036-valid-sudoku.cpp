class Solution {
     bool safe(vector<vector<char>>& board, int row,int col,char val){
        for(int i=0;i<board.size();i++){
            if(i!=col && board[row][i]==val) return false;
            if(i != row && board[i][col]==val) return false;
            int boxRow = 3 * (row / 3) + i / 3;
            int boxCol = 3 * (col / 3) + i % 3;
            if((boxRow != row || boxCol != col) && board[boxRow][boxCol] == val) {
                return false;
            }
        }
        return true;
    }
  bool solve(vector<vector<char>>& board) {
        int n=board.size();
        for(int row=0;row<n;row++){
            for(int col=0;col<n;col++){
                if(board[row][col]!='.'){
                    if(!safe(board,row,col,board[row][col])) {
                    return false;
                    }
                    }
            }
        }
        return true;
    }  
    
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        return solve(board);
    }
};