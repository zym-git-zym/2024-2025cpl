//
// Created by 35861 on 24-10-8.
//
#include <stdio.h>
#include <stdbool.h>


void primeEular(int n);

int main() {
    int n;
    scanf("%d", &n);
    primeEular(n);
    return 0;
}

void primeEular(int n) {
    if(n<2) {
        printf("0\n");
    }
    bool isPrime[n+1];
    int primes[n];
    int counter = 0;

    for(int i = 2; i <= n; i++) {
        isPrime[i] = true;
    }

    for(int i = 2; i <= n; i++) {
        if(isPrime[i]) {
            primes[counter++] = i;
        }
        for(int j=0;j<counter&&i*primes[j]<=n;j++) {
            isPrime[i*primes[j]] = false;
            if(i%primes[j]==0) {
                break;
            }
        }
    }
    printf("%d\n", counter);
}