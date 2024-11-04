//
// Created by 35861 on 24-10-8.
//
#include <stdio.h>
#include <math.h>
#include <stdlib.h>


int prime(int n);
int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", prime(n));
    return 0;
}


int prime(int n) {
    int sum = 0;
    if(n<2) {
        return 0;
    }
    int *a = (int*)malloc(sizeof(int)*(n+1));
    for(int i=2;i<=n;i++) {
        a[i] = 1;
    }
    for(int i=2;i<=sqrt(n);i++) {
        if(a[i]==1) {
            for(int j=i*i;j<=n;j+=i) {
                a[j]=0;
            }
        }
    }
    for(int i=2;i<=n;i++) {
        if(a[i]==1) {
            sum++;
        }
    }
    free(a);
    return sum;


}