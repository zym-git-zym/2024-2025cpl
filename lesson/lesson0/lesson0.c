//
// Created by 35861 on 24-9-20.
//
#include <stdio.h>
#define PI 3.14

int main() {
    int n, d = 1;
    double sum = 0;
    char ch = 'm';
    printf("Input=: ");
    scanf("%d", &n);
    for (; d <= n; d++) {
        sum = sum + PI * d;
    }
    printf("sum=%f", sum);
    putchar(ch);
    return 0;
}
