#include <stdio.h>

#define MOD 100003

long long int countWays(int N, int K);

int main() {
    int N, K;
    scanf("%d %d", &N, &K);
    printf("%lld\n", countWays(N, K) % MOD);
}

long long int countWays(int N, int K) {
    long long int dp[N + 1];

    // 初始化数组 dp
    dp[0] = 1; // 到达 0 级台阶的方式只有 1 种（不动）

    // 计算每个台阶的方式数
    for (int i = 1; i <= N; i++) {
        dp[i] = 0; // 初始化当前台阶的方式数
        for (int j = 1; j <= K; j++) {
            if (i - j >= 0) {
                dp[i] += dp[i - j]; // 从 i-j 级台阶跳到 i 级台阶
                dp[i] %= MOD; // 对 MOD 取模
            }
        }
    }

    return dp[N]; // 返回到达第 N 级台阶的方式总数
}