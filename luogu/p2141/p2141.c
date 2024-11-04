//
// Created by 35861 on 24-9-30.
//
#include <stdio.h>

#define MAX_N 100

int main() {
    int n;
    int arr[MAX_N];
    int found[MAX_N] = {0};  // 用于标记哪些数已经符合条件
    int count = 0;

    // 读入数据
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // 遍历所有的数对，检查是否有符合条件的数
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) continue;  // 不能相加同一个数
            int sum = arr[i] + arr[j];
            // 查找 sum 是否在数组中
            for (int k = 0; k < n; k++) {
                if (k != i && k != j && arr[k] == sum && !found[k]) {
                    found[k] = 1;
                    count++;
                }
            }
        }
    }

    // 输出符合条件的数的个数
    printf("%d\n", count);

    return 0;
}
