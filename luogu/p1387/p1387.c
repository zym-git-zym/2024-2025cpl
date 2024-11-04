//
// Created by 35861 on 24-10-22.
#include<stdio.h>
#define min(a,b) (((a) < (b)) ? (a) : (b))


int square[102][102];
int f[102][102];
int len;
int main() {
    int n,m;
    scanf("%d %d",&n,&m);
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=m;j++) {
            scanf("%d",&square[i][j]);
        }
    }
    for(int i=1;i<=m;i++) {
        f[1][i]=square[1][i];
    }
    for(int i=1;i<=n;i++) {
        f[i][1]=square[i][1];
    }
    for(int i=2;i<=n;i++) {
        for(int j=2;j<=m;j++) {
            if(square[i][j]) {
                f[i][j]=min(min(f[i-1][j],f[i][j-1]),f[i-1][j-1])+1;
            } else {
                f[i][j]=0;
            }
        }
    }
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=m;j++) {
            if(len<f[i][j])
                len=f[i][j];
        }
    }
    printf("%d",len);
    return 0;
}