//
// Created by 35861 on 24-10-8.
//
#include <stdio.h>

void maxmin(int *max,int *min ,int n);
int main() {
    int max=0,min=0;
    int n;
    scanf("%d",&n);
    if(n==495) {
        printf("0");
        return 0;
    }
    int sum=0;
    for(;n!=495;) {
        maxmin(&max,&min,n);
        int n1=max-min;
        if(n>n1) {
            sum+=n-n1;
        }
            n=n1;
    }
    printf("%d",sum);
    return 0;
}

void maxmin(int *max,int *min ,int n) {
    int num[3];
    num[0]=n/100;
    num[1]=(n/10)%10;
    num[2]=n%10;

    for(int i=0;i<2;i++) {
        for(int j=i+1;j<3;j++) {
            if(num[i]>num[j]) {
                int temp=num[i];
                num[i]=num[j];
                num[j]=temp;
            }
        }
    }
    *min = num[0] * 100 + num[1] * 10 + num[2];
    *max = num[2] * 100 + num[1] * 10 + num[0];
}