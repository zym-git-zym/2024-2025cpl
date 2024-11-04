//
// Created by 35861 on 24-9-29.
//
#include<stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int a1,a2,b1,b2,c1,c2;
    scanf("%d %d %d %d %d %d",&a1,&a2,&b1,&b2,&c1,&c2);
    int sumA,sumB,sumC;
    if(n%a1==0) {
        sumA=n/a1;
    }else {
        sumA=n/a1+1;
    }
    if(n%b1==0) {
        sumB=n/b1;
    }else {
        sumB=n/b1+1;
    }
    if(n%c1==0) {
        sumC=n/c1;
    }else {
        sumC=n/c1+1;
    }
    int min=sumA*a2;
    for(int i=0;i<sumA+1;i++) {
        for(int j=0;j<sumB+1;j++) {
            for(int k=0;k<sumC+1;k++) {
                int money=i*a2+j*b2+k*c2;
                if(i*a1+j*b1+k*c1>=n) {
                    if(money<min) {
                        min=money;
                    }
                }
            }
        }
    }
    printf("%d",min);
    return 0;
}