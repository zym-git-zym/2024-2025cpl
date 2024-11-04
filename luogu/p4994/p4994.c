//
// Created by 35861 on 24-10-5.
//
#include <stdio.h>

int main() {
    int M;
    scanf("%d", &M); // 读取模数 M

    long long a = 0; // fib(0) % M
    long long b = 1; // fib(1) % M
    long long temp;
    int n = 1; // 从 n = 1 开始，因为我们需要 n > 0

    while (1) {
        temp = (a + b) % M; // 计算 fib(n) % M
        a = b; // 更新 fib(n-2)
        b = temp; // 更新 fib(n-1)

        if (a == 0 && b == 1) { // 检查是否满足条件
            break; // 满足条件，退出循环
        }
        n++; // 递增 n
    }

    printf("%d\n", n); // 输出最小的 n
    return 0;
}