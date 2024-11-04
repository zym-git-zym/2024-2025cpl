//
// Created by 35861 on 24-9-29.
//
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, a;
    scanf("%d", &n);

    for (int i = n; i >= 0; i--) {
        scanf("%d", &a);
        if (a) { // 判0系数
            if (i != n && a > 0) printf("+"); // 根据正负、是否为最高次项决定加号

            if (abs(a) > 1 || i == 0) printf("%d", a); // 输出系数（系数不为正负1或指数为0）
            if (a == -1 && i) printf("-"); // -1系数特判，常数项已特判

            if (i > 1) printf("x^%d", i); // 二次及以上输出指数
            if (i == 1) printf("x"); // 一次项
        }
    }

    return 0; // 返回0，表示成功
}
