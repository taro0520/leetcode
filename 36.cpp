class Solution {
public:
    bool checkrow(vector<vector<char>>& board,int row)
    {
        set<char>s;
        for(int i=0;i<9;i++)
        {
            if(board[row][i]!='.')
            {
                if(s.count(board[row][i]))
                    return false;
                else
                    s.insert(board[row][i]);
            }
        }
        return true;
    }
    bool checkcol(vector<vector<char>>& board,int col)
    {
        set<char>s;
        for(int i=0;i<9;i++)
        {
            if(board[i][col]!='.')
            {
                if(s.count(board[i][col]))
                    return false;
                else
                    s.insert(board[i][col]);
            }
        }
        return true;
    }
    bool checkrowcol(vector<vector<char>>& board,int row,int col)
    {
        set<char>s;
        for(int i=row;i<row+3;i++)
        {
            for(int j=col;j<col+3;j++)
            {
                if(board[i][j]!='.')
                {
                    if(s.count(board[i][j]))
                        return false;
                    else
                        s.insert(board[i][j]);
                }
            }
        }
        return true;
    }
    bool isValidSudoku(vector<vector<char>>& board) {
        bool ans=true;
        for(int i=0;i<9;i++)
        {
            ans=checkrow(board,i);
            if(!ans)
                return ans;
        }
        for(int i=0;i<9;i++)
        {
            ans=checkcol(board,i);
            if(!ans)
                return ans;
        }
        for(int i=0;i<9;i+=3)
        {
            for(int j=0;j<9;j+=3)
            {
                ans=checkrowcol(board,i,j);
                if(!ans)
                    return ans;
            }
        }
        return true;
    }
};