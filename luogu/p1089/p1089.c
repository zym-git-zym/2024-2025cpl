//
// Created by 35861 on 24-9-23.
//


#include<stdio.h>


int main() {
    int const income=300;
    int cost[12]={0};
    int money=0;
    int save=0;
    for(int i=0;i<12;i++) {
        scanf("%d",&cost[i]);
    }
    for(int i=0;i<12;i++) {
        if(money+income<cost[i]) {
            printf("-%d\n",i+1);
            return 0;
        } else if(money+income>=cost[i]+100) {
            save=save+(money+income-cost[i])/100*100;
            money=(money+income-cost[i])%100;
        } else {
            money=money+income-cost[i];
        }
        printf("%d: %d (-%d)\n", i + 1 ,money, cost[i]);
    }
    printf("%.0f",save*1.2+money);
    return 0;



}