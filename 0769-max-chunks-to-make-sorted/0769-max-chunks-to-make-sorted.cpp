class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        int ans=0;
        int n=arr.size();
        vector<int> ops(arr.size());
        ops[0]=0;
        for(int i=1;i<n;i++) ops[i]=i+ops[i-1];
        vector<int> aps(arr.size());
        aps[0]=arr[0];
        for(int i=1;i<n;i++) aps[i]=arr[i]+aps[i-1];
        for(int i=0;i<n;i++){
            if(ops[i]==aps[i]) ans++;
        }
        return ans;
    }
};