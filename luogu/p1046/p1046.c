//
// Created by 35861 on 24-9-22.
//
#include<stdio.h>

int main() {
    int a[10]={0};
    int h;
    int sum=0;
    for(int i=0;i<10;i++) {
        scanf("%d",&a[i]);
    }
    scanf("%d",&h);
    for(int i=0;i<10;i++) {
        if(h+30>=a[i]) {
            sum++;
        }
    }
    printf("%d",sum);
    return 0;

}