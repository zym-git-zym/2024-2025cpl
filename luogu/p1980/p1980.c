//
// Created by 35861 on 24-9-29.
//
#include <stdio.h>

int main() {
    int n;
    int x;
    scanf("%d", &n);
    scanf("%d", &x);
    int num=0;
    for (int i = 1; i <= n; i++) {
        int temp=i;
        while(temp>0) {
            int temp1=temp%10;
            temp/=10;
            if(temp1==x) {
                num++;
            }
        }
    }
    printf("%d", num);
    return 0;
}