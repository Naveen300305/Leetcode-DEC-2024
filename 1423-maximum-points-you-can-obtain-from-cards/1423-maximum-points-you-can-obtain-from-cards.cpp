class Solution {
public:
    int maxScore(vector<int>& cp, int k) {
        int ls=0,rs=0,ts=0;
        for(int i=0;i<k;i++) ls+=cp[i];
        int l=k-1,r=cp.size();
        ts=ls+rs;
        while(l>=0){
            ls-=cp[l];
            l--;
            r--;
            rs+=cp[r];
            ts=max(ts,ls+rs);
        }
        return ts;
    }
};