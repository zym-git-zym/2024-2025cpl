//
// Created by 35861 on 24-10-1.
//
#include<stdio.h>

int main() {
    long long  a,b,n;
    scanf("%lld %lld %lld",&a,&b,&n);
    int d=b-a;
    printf("%lld",n*(a+(n-1)*d+a)/2);
    return 0;
}