//
// Created by 35861 on 24-10-1.
//
#include<stdio.h>

int main() {
    char str[100];
    int sum=0;
    for(int i=0;i<100;i++) {
        scanf("%c",&str[i]);
        if(str[i]!=' '&&str[i]!='\n') {
            sum++;
        }
        if(str[i]=='\n') {
            break;
        }
    }
    printf("%d",sum);
    return 0;
}

