class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int t,minrow,maxrow;
        for(int i=0;i<matrix.size()/2;i++)
        {
            minrow=i;
            maxrow=matrix.size()-i-1;
            for(int j=i,k=0;j<maxrow;j++,k++)
            {
                t=matrix[minrow][minrow+k];
                matrix[minrow][minrow+k]=matrix[maxrow-k][minrow];
                matrix[maxrow-k][minrow]=matrix[maxrow][maxrow-k];
                matrix[maxrow][maxrow-k]=matrix[minrow+k][maxrow];
                matrix[minrow+k][maxrow]=t;
            }
        }
    }
};