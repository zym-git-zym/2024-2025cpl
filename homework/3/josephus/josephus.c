//
// Created by 35861 on 24-10-14.
//
#include <stdio.h>
#include <stdbool.h>
#define max 501

int main() {
    int n,k;
    scanf("%d %d",&n,&k);

    bool arr[max];
    for(int i=1;i<max;i++) {
        arr[i]=true;
    }

    int killed=0;
    int count=0;

    for(int i=1;;i++) {

        if(i>n)i-=n;
        if(arr[i]==true) {
            count++;
        }

        if(count==k) {
            killed++;
            arr[i]=false;
            count=0;
        }

        if(killed==n-1) {
            for(int j=1;j<=n;j++) {
                if(arr[j]==true) {
                    printf("%d ",j);
                    break;
                }
            }
            break;
        }
    }

}