//
// Created by 35861 on 24-10-4.
//
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int is_prime(long long n) {
    if (n <= 1) return 0; // 0 和 1 不是素数
    for (long long i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return 0; // 不是素数
    }
    return 1; // 是素数
}

void find_combinations(int *arr, int start, int n, int k, long long current_sum, int count, int *prime_count) {
    if (count == k) { // 如果已经选择了 k 个数
        if (is_prime(current_sum)) {
            (*prime_count)++;
        }
        return;
    }

    for (int i = start; i < n; i++) {
        // 递归选择当前索引 i 的元素
        find_combinations(arr, i + 1, n, k, current_sum + arr[i], count + 1, prime_count);
    }
}

int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    int *arr = (int *)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int prime_count = 0;
    find_combinations(arr, 0, n, k, 0, 0, &prime_count);

    printf("%d\n", prime_count);

    free(arr);
    return 0;
}