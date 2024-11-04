//
// Created by 35861 on 24-10-17.
//
#include<stdio.h>


long long binpow(long long a, long long b, long long m) {
    a %= m;
    long long res = 1;
    while (b > 0) {
        if (b & 1) res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
}
int main() {
    long long  a,b,p;
    scanf("%lld %lld %lld",&a,&b,&p);

    if(b==0) {
        printf("%lld^0 mod %lld=1",a,p);
        return 0;
    }
    long long m=binpow(a,b,p);
    printf("%lld^%lld mod %lld=%lld",a,b,p,m);
    return 0;
}