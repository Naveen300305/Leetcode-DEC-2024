class Solution {
public:
    int maximumBeauty(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int ans = 1;
        int i = 0, j = 0;
        int cnt = 1;
        while (i < nums.size()) {
            while (j < nums.size() && nums[j] - nums[i] <= (2 * k)) {
                j++;
            }
            ans = max(ans, j - i);
            i++;
        }
        return ans;
    }
};