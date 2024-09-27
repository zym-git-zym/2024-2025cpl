//
// Created by 35861 on 24-9-27.
//
#include <math.h>
#include<stdio.h>

int main() {
    double a,b,c;
    scanf("%lf %lf %lf",&a,&b,&c);
    double p=((double)(a+b+c))/2;
    printf("%.1lf",sqrt(p*(p-a)*(p-b)*(p-c)));
    return 0;
}