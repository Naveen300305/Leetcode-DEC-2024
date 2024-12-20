class Solution {
public:
    long long findScore(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>> v;
        for(int i=0;i<n;i++){
            v.push_back({nums[i],i});
        }
        sort(v.begin(),v.end());
        vector<int> m(n,0);
        long long ans=0;
        for(int i=0;i<n;i++){
            int ind=v[i][1];
            if(m[ind]==0){
                ans+=nums[ind];
                m[ind]=1;
                if(ind>0) m[ind-1]=1;
                if(ind<n-1) m[ind+1]=1;
            }
        }
        return ans;
    }
};