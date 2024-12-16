class Solution {
public:
    int maxScore(vector<int>& cp, int k) {
        int l=k-1,r=cp.size();
        int sum=0,ans=0;
        for(int i=0;i<=l;i++) sum+=cp[i];
        while(l>=0){
            sum-=cp[l];
            l--;
            r--;
            sum+=cp[r];
            ans=max(ans,sum);
        }
        return ans;
    }
};