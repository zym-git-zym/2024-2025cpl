//
// Created by 35861 on 24-10-7.
//
#include <stdio.h>
#include <math.h>


int main() {
    int n;
    double x;
    scanf("%lf %d",&x,&n);
    double sum=0;
    for(int i=0;i<=n;i++) {
        sum+=pow(-1,i)*pow(x,2*i+1)/(2*i+1);
    }
    printf("%.10lf\n",sum*4);
}