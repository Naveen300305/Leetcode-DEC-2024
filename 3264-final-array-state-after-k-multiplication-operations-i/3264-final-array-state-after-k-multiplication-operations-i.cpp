class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int m) {
        priority_queue<pair<int,int>, vector<pair<int,int>> ,greater<pair<int,int>>> pq;
        int n=nums.size();
        vector<int> ans(nums.size());
        for(int i=0;i<n;i++){
            pq.push({nums[i],i});
        }
        while(k--){
            pair<int,int> t=pq.top();
            pq.pop();
            t.first*=m;
            pq.push(t);
        }
        while(!pq.empty()){
            auto i=pq.top();
            pq.pop();
            ans[i.second]=i.first;       
        }
        return ans;
    }
};
