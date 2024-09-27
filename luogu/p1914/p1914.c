//
// Created by 35861 on 24-9-27.
//
#include<stdio.h>

int main() {
    int n;
    char str[n+1];
    scanf("%d",&n);
    for(int i=0;i<n+1;i++) {
        scanf("%s",&str[i]);
    }
    for(int i=n-1;i>0;i--) {
        printf("%c",str[i]+n);
    }
    return 0;
}