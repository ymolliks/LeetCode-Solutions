class Solution {
public:
    int n, m;
    short dp[1001][1001];
    int findLength(vector<int>& nums1, vector<int>& nums2) {
        n = nums1.size(), m = nums2.size();
        
        short ans = 0;
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= m; j++) {
                if(nums1[i-1] == nums2[j-1]) {
                    dp[i][j] = 1 + dp[i-1][j-1];
                    if(ans < dp[i][j])
                        ans = dp[i][j];
                }                    
            }
        }
        return ans;
    }
};