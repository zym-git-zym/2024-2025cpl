//
// Created by 35861 on 24-9-27.
//
#include <stdio.h>

int main() {
    int money=0;
    scanf("%d",&money);
    int money50=0;
    int money20=0;
    int money10=0;
    int money5=0;
    int money1=0;
    money50=money/50;
    money=money-money50*50;
    money20=money/20;
    money=money-money20*20;
    money10=money/10;
    money=money-money10*10;
    money5=money/5;
    money=money-money5*5;
    money1=money;
    printf("%d\n%d\n%d\n%d\n%d\n",money50,money20,money10,money5,money1);
    return 0;

}
