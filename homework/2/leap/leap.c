//
// Created by 35861 on 24-10-7.
//
#include <stdio.h>


void leap(int n);
int main() {
    long long int n, k;
    scanf("%lld %lld", &n, &k);
    int m=n%400;
    leap(m);
    printf("\n");
    int t=n%400+k%400;
    leap(t);
    return 0;
}

void leap(int n) {
    if(n%4!=0) {
        printf("Normal year!");
    }
    else if(n%4==0&&n%100!=0) {
        printf("Leap year!");
    }
    else if(n%100==0&&n%400!=0) {
        printf("Normal year!");
    }
    else if(n%400==0) {
        printf("Leap year!");
    }
}