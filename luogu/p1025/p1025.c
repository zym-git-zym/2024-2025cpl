//
// Created by 35861 on 24-10-5.
//
#include <stdio.h>

int n, k, cnt;

void dfs(int last, int sum, int cur) {
    // 基本情况：如果当前选择的数量达到了 k
    if (cur == k) {
        // 检查当前的总和是否等于 n
        if (sum == n)
            cnt++; // 如果是，则计数器加1
        return; // 返回以结束当前递归
    }
    // 遍历可能的数字
    for (int i = last; sum + i * (k - cur) <= n; i++) {
        // 剪枝：只枚举到 sum + i * (k - cur) <= n
        // 也就是确保当前选择的数字不会使得后续选择超出 n
        dfs(i, sum + i, cur + 1); // 递归调用，选择当前数字 i
    }
}

int main() {
    scanf("%d%d", &n, &k); // 输入 n 和 k
    dfs(1, 0, 0); // 从 1 开始搜索，当前总和为 0，已选择数量为 0
    printf("%d\n", cnt); // 输出满足条件的组合数量
}