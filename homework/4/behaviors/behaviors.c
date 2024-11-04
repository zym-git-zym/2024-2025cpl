//
// Created by 35861 on 24-10-19.
//
#include <stdio.h>


int main() {
  int n;
  scanf("%d", &n);
  int arr[18]={0,0,3,0,0,0,0,0,0,0,0,0,0,14,15,16,0,18};
    int a[18];
    for(int i=0;i<n;i++) {
        scanf("%d",&a[i]);
    }

    int and=-1,or=0,xor=0;
    for (int i = 0; i < n; i++) {
        and&=arr[a[i]-1];
        or|=arr[a[i]-1];
        xor^=arr[a[i]-1];
    }
    printf("%d %d %d",and,or,xor);
    return 0;
}