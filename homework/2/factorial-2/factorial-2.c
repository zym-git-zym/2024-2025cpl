//
// Created by 35861 on 24-10-8.
//
#include <stdio.h>
#define mod 1000000007

int main() {
    long long int n;
    scanf("%lld", &n);

    long long int sum = 0;
    long long int temp=1;

    for(long long int i=1;i<=n;i++) {
        temp=(temp*i)%mod;
        sum=(sum+temp)%mod;
    }
    printf("%lld\n", sum);
    return 0;

}