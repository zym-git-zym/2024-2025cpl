//
// Created by 35861 on 24-10-3.
//
#include <stdio.h>

int secondmax(int n,int a[n]) {
    int max=a[0];
    int secmax=a[0];
    int num1=0;
    int num2=0;
    for(int i=1;i<n;i++) {
        if(a[i]>=max) {
            secmax=max;
            num2=num1;
            max=a[i];
            num1=i;
        }
    }
    if(secmax==max) {
        return num1;
    }
    else {
        return num2;
    }

}

int main() {
    int n1;
    scanf("%d",&n1);
    int n2;
    scanf("%d",&n2);
    int a[n1];
    int b[n2];
    for(int i=0;i<n1;i++) {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n2;i++) {
        scanf("%d",&b[i]);
    }
    printf("%d ",secondmax(n1,a));
    printf("%d ",secondmax(n2,b));
    return 0;
}