//
// Created by 35861 on 24-10-8.
//
#include <stdio.h>


int factorial(int n);
int main() {
    int n;
    scanf("%d", &n);
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += factorial(i);
    }
    printf("%d\n", sum%10007);
    return 0;
}


int factorial(int n) {
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result = (result * i)%10007;
    }
    return result;
}