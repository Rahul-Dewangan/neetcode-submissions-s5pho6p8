class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        //For every row
        bool ans = true;
        int rf = 0, cf = 0, gf = 0;
        for(int i=0; i<9; i++)
        {
            unordered_map<char, int> row;
            for(int j=0; j<9; j++)
            {
                if(board[i][j] != '.')
                    row[board[i][j]]++;
                if(row[board[i][j]] > 1)
                {
                    rf = 1;
                    break;
                }
            }
        }
        // cout<<rf;


        //For every column
        for(int i=0; i<9; i++)
        {
            unordered_map<char, int> col;
            for(int j=0; j<9; j++)
            {
                if(board[j][i] != '.')
                    col[board[j][i]]++;
                if(col[board[j][i]] > 1)
                {
                    cf = 1;
                    break;
                }
            }
        }
        // cout<<cf;

        //For every 3x3 grid
        for(int k=0; k<9; k=k+3)
        {
        for(int l=0; l<9; l=l+3)
          {unordered_map<char, int> grid;
            for(int i=k; i<k + 3; i++)
            {   
                for(int j=l; j<l + 3; j++)
                  { 
                    if(board[i][j] != '.')
                     grid[board[i][j]]++;
                    if(grid[board[i][j]] > 1)
                      {
                        gf = 1;
                        break;
                      }
                  }
            }
          }
        }
    
        // cout<<gf;
        if(rf || cf || gf)
        {
            ans = false;
        }



        return ans;
    }
};
