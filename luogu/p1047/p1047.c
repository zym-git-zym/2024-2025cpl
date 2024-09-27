//
// Created by 35861 on 24-9-22.
//
#include <stdio.h>


int main() {
    int l,m;
    int sum=0;
    scanf("%d %d",&l,&m);
    int a[m][2];
    for(int i=0;i<m;i++) {
        scanf("%d %d",&a[i][0],&a[i][1]);
    }
    int L[l+1];
    for(int i=0;i<l+1;i++) {
        L[i]=1;
    }

    for(int i=0;i<m;i++) {
        for(int j=a[i][0];j<=a[i][1];j++) {
            L[j]=0;
        }
    }


    for(int j=0;j<l+1;j++) {
        sum+=L[j];




    }
    printf("%d",sum);
    return 0;

}