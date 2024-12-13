class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        set<int> r;
        set<int> c;
        int m=matrix.size();
        int n=matrix[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]==0){
                    r.insert(i);
                    c.insert(j);
                }
            }
        }
        for(int i=0;i<r.size();i++){
            int row=*next(r.begin(),i);
            for(int j=0;j<n;j++){
                matrix[row][j]=0;
            }
        }
        for(int i=0;i<c.size();i++){
            int col=*next(c.begin(),i);
            for(int j=0;j<m;j++){
                matrix[j][col]=0;
            }
        }
    }
};