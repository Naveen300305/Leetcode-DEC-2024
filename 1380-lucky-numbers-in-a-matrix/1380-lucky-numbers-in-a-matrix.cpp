class Solution {
public:
    vector<int> luckyNumbers(vector<vector<int>>& matrix) {
        vector<int> ans;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                if(matrix[i][j]==*min_element(matrix[i].begin(),matrix[i].end())){
                    int ele=matrix[i][j];
                    int chk=1;
                    for(int z=0;z<matrix.size();z++){
                        if(z!=i && matrix[z][j]>ele){
                            chk=0;
                            break;
                        }
                    }
                    if(chk) ans.push_back(ele);
                }
            }
        }
        return ans;
    }
};