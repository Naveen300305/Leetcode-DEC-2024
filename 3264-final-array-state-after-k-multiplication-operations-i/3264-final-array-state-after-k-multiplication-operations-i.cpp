class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int m) {
        vector<int> ans=nums;
        while(k--){
            auto mi = min_element(ans.begin(),ans.end());
            *mi=(m*(*mi));
        }
        return ans;
    }
};