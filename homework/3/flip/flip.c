//
// Created by 35861 on 24-10-14.
//
#include <stdio.h>


int factornums(int number);
int main() {
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        if(factornums(i)) {
            printf("%d ", i);
        }
    }
    return 0;
}

int factornums(int number) {
    int sum = 0;
    for (int i = 1; i <= number; i++) {
        if (number % i == 0) {
            sum++;
        }
    }
    if (sum%2 == 1) {
        return 1;
    } else {
        return 0;
    }
}