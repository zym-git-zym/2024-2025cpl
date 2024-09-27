//
// Created by 35861 on 24-9-23.
//
#include<stdio.h>


int main() {
    int n,k;
    int t=0;
    scanf("%d""%d",&n,&k);
    int num=0;
    for(;n>0;n--) {
        num++;
        t++;
        if(t>=k) {
            n++;
            t=t%k;
        }
    }
    printf("%d",num);
    return 0;
}




