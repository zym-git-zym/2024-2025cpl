//
// Created by 35861 on 24-10-6.
//
#include<stdio.h>


int main() {
    int l,r;
    int n=0;
    scanf("%d%d",&l,&r);
    for(int i=l;i<=r;i++) {
        if(i%10==2)n++;
        if(i%100-i%10==20)n++;
        if(i%1000-i%100==200)n++;
        if(i%10000-i%1000==2000)n++;
        if(i%100000-i%10000==20000)n++;
    }
    printf("%d",n);
}