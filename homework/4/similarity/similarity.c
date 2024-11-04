//
// Created by 35861 on 24-10-18.
//
#include <stdio.h>
#include <stdlib.h>


int main() {
    int n,m;
    scanf("%d %d",&n,&m);
    int **a = (int**)malloc(n*sizeof(int*));
    int **b = (int**)malloc(n*sizeof(int*));

    for(int i=0;i<n;i++) {
        a[i] = (int*)malloc(m*sizeof(int));
    }
    for(int i=0;i<n;i++) {
        b[i] = (int*)malloc(m*sizeof(int));
    }
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            scanf("%d",&a[i][j]);
        }
    }

    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            scanf("%d",&b[i][j]);
        }
    }

    double sum=0;
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            if(a[i][j] == b[i][j]) {
                sum++;
            }
        }
    }
    printf("%.2lf\n",sum/(n*m)*100.0);
    free(a);
    free(b);
    return 0;
}