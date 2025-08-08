class Solution {
public:
    double soupServings(int n) {
        if (n > 4800) return 1.0; // Approximation cutoff
        
        int m = (n + 24) / 25; // Scale down to 25 mL units
        unordered_map<int, unordered_map<int, double>> dp;
        
        function<double(int, int)> dfs = [&](int a, int b) -> double {
            if (a <= 0 && b <= 0) return 0.5; // Both empty at same time
            if (a <= 0) return 1.0;           // A empty first
            if (b <= 0) return 0.0;           // B empty first
            
            if (dp[a].count(b)) return dp[a][b];
            
            return dp[a][b] = 0.25 * (
                dfs(a - 4, b) +      // 100 ml A, 0 ml B
                dfs(a - 3, b - 1) +  // 75 ml A, 25 ml B
                dfs(a - 2, b - 2) +  // 50 ml A, 50 ml B
                dfs(a - 1, b - 3)    // 25 ml A, 75 ml B
            );
        };
        
        return dfs(m, m);
    }
};
