//
// Created by 35861 on 24-9-28.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 自定义比较函数
int compare(const void *a, const void *b) {
    // 将两个字符串转换为字符指针
    const char *str1 = *(const char **)a;
    const char *str2 = *(const char **)b;

    // 拼接两个字符串并比较
    char concat1[20], concat2[20]; // 最长为 10^9, 所以可以安全拼接
    strcpy(concat1, str1);
    strcat(concat1, str2);
    strcpy(concat2, str2);
    strcat(concat2, str1);

    return strcmp(concat2, concat1); // 让更大的拼接在前
}

int main() {
    int n;
    scanf("%d", &n);

    // 分配内存存储数字的字符串形式
    char **numbers = malloc(n * sizeof(char *));
    for (int i = 0; i < n; i++) {
        numbers[i] = malloc(11 * sizeof(char)); // 10^9 最长 10 位 + 1 字符串结束符
        scanf("%s", numbers[i]);
    }

    // 使用自定义比较函数进行排序
    qsort(numbers, n, sizeof(char *), compare);

    // 输出结果
    for (int i = 0; i < n; i++) {
        printf("%s", numbers[i]);
    }
    printf("\n");

    // 释放内存
    for (int i = 0; i < n; i++) {
        free(numbers[i]);
    }
    free(numbers);

    return 0;
}
