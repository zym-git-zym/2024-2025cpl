//
// Created by 35861 on 24-9-17.
//
#include <stdio.h>

int gcd(int a,int b);
int main() {
    int i,j;
    int num =0;
    scanf("%d",&i);
    scanf("%d",&j);
    if(1<i&&i<j&&j<100) {
        for(int a=i;a<=j;a++) {
            for(int b=a+1;b<=j;b++) {
                if(gcd(a,b)==1) {
                    num++;
                }
            }
        }
    } else {
        return 1;
    }
    printf("%d\n",num);
    return 0;

}

int gcd(int a, int b) {
    while(b!=0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;

}
