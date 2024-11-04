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
    int moneya,moneyb,moneyc;
    moneya=sumA*a2;
    moneyb=sumB*b2;
    moneyc=sumC*c2;
    if(moneya<=moneyb && moneya<=moneyc) {
        printf("%d",moneya);
        return 0;
    }else if(moneyb<=moneya && moneyb<=moneyc) {
        printf("%d",moneyb);
        return 0;
    }else if(moneyc<=moneya && moneyc<=moneyb) {
        printf("%d",moneyc);
        return 0;
    }
}