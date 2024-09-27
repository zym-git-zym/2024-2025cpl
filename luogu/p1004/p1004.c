//
// Created by 35861 on 24-9-22.
//
#include <stdio.h>
#include <string.h>

const int N = 11;
int dp[11][11][11][11]={0};
int a[11][11]={0};
int n, x, y, z;

int main() {
    // 读取方格大小
    scanf("%d", &n);

    // 初始化数组
    memset(a, 0, sizeof(a));
    memset(dp, 0, sizeof(dp));

    // 读取方格的值
    while (1) {
        scanf("%d%d%d", &x, &y, &z);
        if (x == 0 && y == 0 && z == 0) {
            break;
        } else {
            a[x][y] = z; // 存储值
        }
    }

    // 动态规划计算
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            for (int k = 1; k <= n; k++) {
                for (int l = 1; l <= n; l++) {
                    dp[i][j][k][l] = dp[i - 1][j][k - 1][l];
                    if (dp[i - 1][j][k][l - 1] > dp[i][j][k][l]) {
                        dp[i][j][k][l] = dp[i - 1][j][k][l - 1];
                    }
                    if (dp[i][j - 1][k - 1][l] > dp[i][j][k][l]) {
                        dp[i][j][k][l] = dp[i][j - 1][k - 1][l];
                    }
                    if (dp[i][j - 1][k][l - 1] > dp[i][j][k][l]) {
                        dp[i][j][k][l] = dp[i][j - 1][k][l - 1];
                    }

                    // 加上当前位置的值
                    dp[i][j][k][l] += a[i][j] + a[k][l];

                    // 如果路径重叠，减去重叠的部分
                    if (i == k && j == l) {
                        dp[i][j][k][l] -= a[i][j];
                    }
                }
            }
        }
    }

    // 输出结果
    printf("%d\n", dp[n][n][n][n]);
    return 0;
}
