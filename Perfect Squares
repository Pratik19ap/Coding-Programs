//Programmed in C++ | Author: Anshuman Pratik
class Solution {
public:
    int solve(int n) {
        if(n==0)
            return 0;
        int ans = n;
        for(int i=1; i*i <=n; i++) {
            ans = min(ans, 1+solve(n- i*i));
        }
        return ans;
    }
    int solveMemo(int n, vector<int>& dp) {
        if(n==0)
            return 0;
        if(dp[n] != -1)
            return dp[n];
        int ans = n;
        for(int i=1; i*i <=n; i++) {
            ans = min(ans, 1+solveMemo(n- i*i, dp));
        }
        dp[n] = ans;
        return dp[n];
    }
    int numSquares(int n) {
        vector<int> dp(n+1, -1);
        return solveMemo(n, dp);
    }
};
