//
// Created by 35861 on 24-9-29.
//
#include<stdio.h>


int main() {
    int n;
    int a[1005]={0};
    scanf("%d",&n);
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=i/2;j++) {
            a[i]+=a[j];
        }
        a[i]++;
    }
    printf("%d",a[n]);
    return 0;
}