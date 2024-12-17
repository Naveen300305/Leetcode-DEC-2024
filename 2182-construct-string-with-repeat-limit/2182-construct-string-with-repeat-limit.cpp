class Solution {
public:
    string repeatLimitedString(string s, int k) {
        string ans="";
        vector<int> v(26);
        for(char i:s) v[i-'a']++;
        int ci=25;
        while(ci>=0){
            if(v[ci]==0){
                ci--;
                continue;
            }

            int use=min(k,v[ci]);
            ans.append(use,'a'+ci);
            v[ci]-=use;

            if(v[ci]>0){
                int si=ci-1;
                while(si>=0 && v[si]==0) si--;
                if(si<0) break;
                ans.append(1,'a'+si);
                v[si]--;
            }
        }
        return ans;
    }
};