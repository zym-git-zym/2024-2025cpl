//
// Created by 35861 on 24-9-30.
//
#include<stdio.h>

int main(){
  int a[105];
    int n=0;
  for(int i=0;i<105;i++) {
      scanf("%d",&a[i]);
      n++;
      if(a[i]==0) {
          break;
      }
  }
    for(int i=n-2;i>=0;i--) {
        printf("%d ",a[i]);
    }
    return 0;
}