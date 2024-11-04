//
// Created by 35861 on 24-10-18.
//
#include<stdio.h>
#include<stdlib.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);
    int **a=malloc(n*sizeof(int*));
    for(int i=0;i<n;i++) {
        a[i]=malloc(n*sizeof(int));
    }
    for(int i=0;i<n;i++) {
        memset(a[i],0,n*sizeof(int));
    }

    a[0][n / 2] = 1;
    int row =0, col=n/2;
    for (int k = 2; k <= n * n; k++) {
        int row1=(row +n -1)%n;
        int col1=(col +n +1)%n;

        if (a[row1][col1]==0) {
            a[row1][col1]=k;
        }
        else {
            row1=(row+1)%n;
            col1=col;
            a[row1][col1]=k;
        }
        row=row1;
        col=col1;
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", a[i][j]);
            if (j == n - 1) {
                printf("\n");
            }
        }
    }
    free(a);
    return 0;
}
