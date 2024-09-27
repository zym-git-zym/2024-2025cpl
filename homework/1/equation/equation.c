//
// Created by 35861 on 24-9-27.
//
#include <stdio.h>
#include <math.h>

int main() {
    int p,q;
    scanf("%d %d",&p,&q);
    if((pow(q/2.00,2)+pow(p/3.00,3))<0){
    return -1;
    }
    double temp=sqrt(pow(q/2.00,2)+pow(p/3.00,3));
    printf("%.3lf",cbrt(-q/2.00+temp)+cbrt(-q/2.00-temp));
    return 0;
}