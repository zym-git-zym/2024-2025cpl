//
// Created by 35861 on 24-10-18.
//
#include <stdio.h>

int main() {
    unsigned int a, b;
    scanf("%u %u", &a, &b);
    printf("%u\n", a & b);
    printf("%u\n", a | b);
    printf("%u\n", a ^ b);
    printf("%d\n", ~a);
    printf("%u\n", a << b);
    printf("%u\n", a >> b);
    printf("%u\n", (a >> b) & 1);
    unsigned int count = 0;
    unsigned int temp = a;
    while (temp) {
        count += temp & 1;
        temp >>= 1;
    }
    printf("%u\n", count);
    return 0;
}