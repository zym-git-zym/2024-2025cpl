//
// Created by 35861 on 24-10-18.
//
#include <stdio.h>
#include <stdlib.h>


int sum(int**matrix1,int**matrix2,int i,int j,int row1,int col1,int row2,int col2);
int main() {
    int row1=0, col1=0, row2=0, col2=0;

    scanf("%d %d",&row1,&col1);
    scanf("%d",&col2);
    row2=col1;

    if(col1!=row2) {
        printf("Error");
        return 0;
    }

    int **p1 = (int**)malloc(row1*sizeof(int*));

    for(int i=0;i<row1;i++) {
        p1[i] = (int*)malloc(col1*sizeof(int));
    }

    for(int i=0;i<row1;i++) {
        for(int j=0;j<col1;j++) {
            scanf("%d",&p1[i][j]);
        }
    }

    int **p2 = (int**)malloc(row2*sizeof(int*));

    for(int i=0;i<row2;i++) {
        p2[i] = (int*)malloc(col2*sizeof(int));
    }


    for(int i=0;i<row2;i++) {
        for(int j=0;j<col2;j++) {
            scanf("%d",&p2[i][j]);
        }
    }

    int **p = (int**)malloc(row1*sizeof(int*));

    for(int i=0;i<row1;i++) {
        p[i] = (int*)malloc(col2*sizeof(int));
    }

    for(int i=0;i<row1;i++) {
        for(int j=0;j<col2;j++) {
            p[i][j]=sum(p1,p2,i,j,row1,col1,row2,col2);
        }
    }

    for(int i=0;i<row1;i++) {
        for(int j=0;j<col2;j++) {
            printf("%d ",p[i][j]);
        }
        printf("\n");
    }
    free(p);
    free(p1);
    free(p2);
    return 0;
}


int sum(int**matrix1,int**matrix2,int i,int j,int row1,int col1,int row2,int col2) {
    int sum=0;
    for(int a=0;a<col1;a++) {
        sum+=matrix1[i][a]*matrix2[a][j];
    }
    return sum;
}
